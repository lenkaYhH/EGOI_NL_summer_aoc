# Lollipops

There are `2n` lollipops. Every lollipop has a delicious level `d`
Every round, you are shown 2 lollipops, and you are only allowed to choose one. The one you don't choose gets discarded and does not come back.

What is the maximum total deliciousness you can get?

## Input
```
n
a1 b1
...
an bn
```

- One line with `n`, the number of rounds
- Then, there are n lines that show the deliciousness of the two lollipops of that round
It is guaranteed that the sum of all deliciousness is under 10^8.

## Output
One line with the maximum deliciousness you can reach

## Samples
### Sample Input 1
```
2
1 2
3 4
```

### Sample Output 1
```
6
```

**Explanation:** the best choice is to take lollipop with deliciousness 2 in the first round, and then lollipop with deliciousness 4 in the second round. This gives a total of 2+4 = 6.

### Sample Input 2
```
1
5 7
```
### Sample Output 2
```
7
```

