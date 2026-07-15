# The very hungry caterpillar 

The very hungry caterpillar is very very hungry. Luckily, there are `n` food in front of them! The caterpillar has eaten all the food* and eaten the food in order!

Unfortunately, not all the food is very healthy. Specifically, food number `i` has a health level `hi`. When the caterpillar eats a food with health `hi`, they gain `hi` HP points. When a food is poisonous, `hi` will be a negative number, meaning the caterpillar loses HP.
The caterpillar dies from the food if at any point its HP is less than 0.  Note that the caterpillar is still alive at HP=0. 

*If the caterpillar dies before finishing all the food, the rest of the food is not finished (see sample 2).

Luckily, you have discovered the power of time travel and you will save all the childhoods by preventing the very hungry caterpillar from dying. Specifically, you will go back in time and tell the caterpillar "Ja" or "Nee" depending on whether it should eat the food or not. 


## Input
One line with `n`, 1 <= n <= 10^5, which is how many items of food are in front of the caterpillar

One line with n integers, representing the food health in order 

`h1 h2 … hn` 

-10^4 <= food health <= 10^4

## Output
Output what you will tell the caterpillar about eating the food:
- `Ja` if the caterpillar will survive the food and can eat it
- `Nee` if the caterpillar will not survive the food so should not eat it

(Be careful with spelling and capitalization!)

## Samples
### Sample Input 1
```
3
5 -2 1
```

### Sample Output 1
```
Ja
```

The caterpillar starts with HP=0
- After eating food 1, HP = 0+5=5 (still alive)
- After eating food 2, HP = 5 -2 = 3 (still alive)
- After eating food 3, HP=3+1=4 (stll alive)

Since the caterpillar will not die, it can eat all the food. 

### Sample Input 2
```
5
2 -3 8 100 1000
```

### Sample Output 2
```
Nee
```

The caterpillar starts with HP=0
- After eating food 1, HP = 0+2=2 (still alive)
- After eating food 2, HP = 2-3 = -1 (caterpillar dies)
- Since the caterpillar is already dead, it will not be able to eat the remaining food.

You go back in time and tell the caterpillar to not eat the food.

### Sample Input 3
```
3
1348 5630 -6978
```

### Sample Output 3
```
Ja
```

The caterpillar starts with HP=0
- After eating food 1, HP = 0+1348=1348 (still alive)
- After eating food 2, HP=1348+5630=6978 (stll alive)
- After eating food 3, HP = 6978-6978 = 0 (still alive)

Since the caterpillar will not die, it can eat all the food. 

