# Big steps, small step

You are the hero in a video game and you need to go save poor civilians from the monster. You are at coordinate (0, 0) and the monster is at (x, y). You can only take the following steps:

**1. Big Step:** 
- you move to the right by 2 OR you move up by 2; in mathematical terms, if you are currently at position (a, b), you move to (a+2, b) or (a, b+2)
- you may use this move however many number of times

**2. Small Step:**
- you move to the right by 1 OR you move up by 1; in mathematical terms, if you are currently at position (a, b), you move to (a+1, b) or (a, b+1)
- _you may only use this move AT MOST ONCE_ 

Can you reach the monster?

## Input
```
x y
```
One line with two numbers, x and y coordinate of the monster. 
It is guaranteed that 1 <= x, y <= 10^6

## Output
One line with `Ja` or `Nee`

(Be careful of spelling and capital letters!)

## Samples
### Sample Input 1
```
10 10 
```

## Sample Output 1
```
Ja
```

**Explanation:** You can take 5 big steps up, and 5 big steps to the right to get to (10, 10). You use 0 small steps, which is allowed because it is indeed less than or equal to 1.

## Sample Input 2
```
3 3
```
## Sample Output 2
```
Nee
```

**Explanation:** You can take one big step up, one big step right to get to (2, 2). But then you need one small step up, and one small step to the right to get to (3, 3), which gives a total of 2 small steps. This is not allowed because that is more than the 1 small step allowed. 