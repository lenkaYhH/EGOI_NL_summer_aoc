# Trash

Uil is cleaning up after an EGOI training. There are `n` trashbags, each with a different weight (trashbag number `i` has weight `wi`). 
In one walk outside, Uil can take one or two trashbags, as long as the total weight of the trash does not exceed weight `m`. 

Given the trashbags and the weights, how many times must Uil walk to take all the trash out?

This is an easier version of the Kattis problem, Taking out the Trash (<https://open.kattis.com/problems/takingoutthetrash>)

## Invoer
```
n m
w1 w2 ... wn
```
- One line with two numbers: the number of trashbags, and the maximum weight Uil can take in one go.
- One line with n numbers: each number is the weight of each trashbag; it is guaranteed that no trashbag is heavier than what Uil can hold (i.e. `wi <= m` for all `i`)

## Uitvoer
One integer: the number of times Uil needs to walk to take out all the trash.


## Samples
### Sample Input 1
```
6 10
1 2 8 9 3 3
```

### Sample Ouput 1
```
3
``` 
**Explanation**: Uil can do trashbags 1 and 4 (1 + 9 = 10 which is allowed weight) the first time, then trashbags 2 and 3 (2+8 = 10 which is allowed weight) the second time, then the last two trashbags (total weight of 6) in the last walk. Other arrangments for 3 walks are also possible.

### Sample Input 2
```
3 5
4 4 4
```
### Sample Output 2
```
3
```
**Explanation:** Uil needs to take 3 walks, each walk with one trashbag of weight 4. It is not possble to make a combination of trashbags under the maximum weight 5 to take two bags at the same time. 
