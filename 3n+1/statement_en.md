# 3n+1

Uil was recently puzzled by the famous [Collatz Conjecture](https://en.wikipedia.org/wiki/Collatz_conjecture), which, for a number `n`,

- divide by 2, if `n` is even
- multiple by 3 and then add 1, if `n` is odd

If you repeat the process, you will always end up at the number 1.
For example, for `n=10`:
10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

Given `n`, help Uil find the numbers to get to 1.

This problem was taken from [CSES Problem Set Task 1068](https://cses.fi/problemset/task/1068).

## Input
One line with integer `n`

## Output
One line with the integers it takes to get to 1, separated by space. Remember to also print the original number at the beginning, and 1 at the end!

Hint: check out the `while` loop from Hoofstuk 4 

## Sample

### Sample Input 1
`10`

### Sample Output 1
`10 5 16 8 4 2 1`





