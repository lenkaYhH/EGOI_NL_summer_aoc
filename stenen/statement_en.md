# Stones

There are red, blue, and green stones in a row on the table. You want to take away stones such that no two stones of the same colour are directly next to each other. 
When you take away a stone, the rest of the stones remain still in the same order (for example, if stone 1 and 2 are directly next to each other, and stone 2 and 3 are directly next to each other; by removing stone 2, stone 1 and 3 are then next to each other)

What is the minimum number of stones you need to take away?

Source: Codeforces Round 163 Problem A, <https://codeforces.com/problemset/problem/266/A>

## Input
- One line with `n`, the number of stones
- One line with `n` chars, which are either R, B, or G, describing the colour of the stones

## Output
One line with one number: the minimum number of stones you need to remove.

## Samples
### Sample Input 1
```
3
RRG
```

### Sample Output 1
```
1
```

**Explanation:** There are 3 stones on the table: red, red, green.
By removing the first (or the second) red stone, t becomes red, green; which is a good arrangment. 

### Sample Input 2
```
5
RRRBG
```

### Sample Output 2
```
2
```

**Explanation:** There are 5 stones on the table: red, red, red, blue, green.
I can make a good arrangment by removing stones 2 and 3. It is also possible to remove stones 1 and 2, OR stones 1 and 3, to achieve the same output answer. 