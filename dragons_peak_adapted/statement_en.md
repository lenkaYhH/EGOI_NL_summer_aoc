# Dragon's Peak (Adapted version)

This problem has been adapted from NIO finale 2026 Day 2, Problem D - Dragon's peak, subtask 1.

You have been playing the hit MMORPG Dragon's Peak (DP). Your character has an XP system: there are `N` levels, and your character must have at least a<sub>i</sub> XP to be level `i`. 

For example, if a<sub>1</sub>=5 and a<sub>2</sub>=10, it means with 5XP, you are at level 1; and with 10 XP, you are at level 2. Right now, your character is at level 0 with 0XP and you would like to reach level N. 

Since you have to go to the NIO finale in Baarn soon, you have ran out of time to gridn yourself. You have exactly two ways left to make progress, both which costs money:

- **Hire a friend**: You pay Uil `P` euros to play Dragon's Peak for one hour, where your character will **earn 1 XP**.
- **Pay the shop**: You spend `Q` euros at the in-game shop, and you instantly go up to the next level (your character gets just enough XP to be at the next level)

You may use both options any number of times and in any order. 
Since you have to head to the lovely church in Baarn soon, you want to reach level N as cheaply as possible. Find the minimum amount of money you need to spend. 

## Input
- One line with `N P Q`

`N` is the number of levels (where the highest N is the one you want to reach), `P` is the price you pay your friend to earn 1XP, and `Q` is the price to buy one level from the shops

- One line with N space-separated integers, a<sub>1</sub> a<sub>2</sub> ... a<sub>n</sub> 

This is the XP you need to get to each level. It is guaranteed that the XP you need will always increase (i.e. a<sub>1</sub> < a<sub>2</sub> < ... < a<sub>n</sub> )

## Output
One number: the minimum number of euros you need to spend to reach level N


## Samples

### Sample Input 1
```
3 1 3
2 4 6
```


### Sample Output 1
```
6
```

**Sample 1 Explanation:**

There are 3 levels. You can either pay Uil 1 euro to earn 1XP OR pay the shop 3 euros to get to the next level.

You start at 0XP
-  To get to level 1, which needs 2XP: you pay Uil 1 euro x 2 times OR you pay 3 euros to the shop => paying Uil (2 euros) is cheaper
- From level 1 (2XP) to level 2 (4XP): you pay Uil 1 euro x 2 times OR you pay 3 euros to the shop => paying Uil (2 euros) is cheaper
- From level 2 (4XP) to level 3 (8XP): you pay Uil 1 euro x 2 times OR you pay 3 euros to the shop => paying Uil (2 euros) is cheaper

Total minimum cost = 2 euros + 2 euros + 2 euros = 6 euros

### Sample Input 2
```
3 2 5
1 10 12
```

### Sample Output 2
```
11
```

**Sample 2 Explanation:**
There are 3 levels. You can either pay Uil 2 euros to earn you 1XP OR pay the shop 5 euros to get to the next level.

You start at 0XP:
-  To get to level 1, which needs 1XP: you pay Uil 2 euros x 1 time OR you pay 5 euros to the shop => paying Uil (2 euros) is cheaper
- From level 1 (1XP) to level 2 (10 XP): you pay Uil 2 euro x 9 times OR you pay 5 euros to the shop => paying the shop (5 euros) is cheaper
- From level 2 (10XP) to level 3 (12XP): you pay Uil 2 euros x 2 times OR you pay 5 euros to the shop => paying Uil (4 euros) is cheaper

Total minimum cost = 2 + 5 + 4 = 11 euros
