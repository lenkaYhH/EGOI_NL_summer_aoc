# Stairs

Uil is hiking up a hill via a footpath with stairs. There are `n` stairs in the footpath and each stair has its own height (step number `i` has height of `h_i`). Uil notices something interesting: the stairs is supposed to go up the hill, but sometimes one step is strictly lower than the one before! Uil calls these lower stair-step "illogical" because these steps is undoing the "climbing up".

Given the height of the stairs, output how many illogical steps there are.

## Input
```
n
h1 h2 ... hn
```
- One line with integer `n`, the number of steps in the stairs. `1 <= n <= 10^5`
- One line with n integers, the height of each step in order. `1 <= hi <= 10^9`

## Output
One line with one number: the number of illogical steps. 

## Sample
### Sample Input 1
```
5
4 1 1 3 2
```
### Sample Output 1
```
2
```
**Explanation:** 
- step height 4 to step height 1 is illogical
- step height 1 to 1 is fine
- step height 1 to 3 is fine
- step height 3 to step height 2 is illogical
There are a total of 2 illogical steps. 