# Fizz Buzz

Output the numbers 1 up to and including `n`, with the following conditions:

- If the number is divisible by `x`, then output `fizz` instead of the number
- If the number is divisble by `y`, the output `buzz` instead of the number
- If the number is divisible by both `x` and `y`, output `fizzbuzz`

## Input
```
n x y
```
In one line, separated by space

## Output
`n` things in one linen separated by space. Each item is either a number, `fizz`, `buzz`, or `fizzbuzz`

## Samples
### Sample Input 1
```
15 3 5
```

### Sample Output 1
```
1 2 fizz 4 buzz fizz 7 8 fizz buzz 11 fizz 13 14 fizzbuzz
```
**Explanation**: 3, 6, 9, 12 are divisible by 3 so it is replaced by `fizz`; 5, 10 are divisible by 5 so is replaced by `buzz`; 15 is divisible by both 3 and 5 so it is replaced by `fizzbuzz`; the remaining numbers stay the same. 