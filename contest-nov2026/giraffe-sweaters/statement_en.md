# Giraffe Sweaters

You want to buy christmas sweaters for the `n` giraffes at the zoo. 
Unfortunately, giraffe sweaters are very expensive, so you want to buy them all at the same size so it is cheaper for the sweater company to make. 

Giraffe sweaters sizes are based on neck lengths. A giraffe will fit in a sweater as long as the sweater size is not more than `k` cm different from their own length. 
Given the length of each giraffe, will one size sweater fit them all?

## Input 
```
n k 
length_1 ... length_n
```

- one line with integer `n` and `k`
- one line with `n` space-separated integers: the length of each giraffe

## Output
- can you buy the same size for all the giraffes? one line with `ja` or `nee`

## Sample
### Sample Input 1
```
3 10
11 31 16
```

### Sample Output 1
```
ja
```

**Explanation:** If you buy size 21, everyone will fit because 21-11 = 10, 21-16 = 5 and 31-21 = 10, which are all <= 10.

### Sample Input 2
```
5 2
1 2 3 4 6
```

### Sample Output 2
```
nee
```

**Explanation**: there is no way to buy something that fits everyone. if you buy size 3, the first giraffe will fit but the last one will not (6-3 > 2). If you buy size 4, the last giraffe will fit but the first one will not.