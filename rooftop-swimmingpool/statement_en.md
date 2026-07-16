# Rooftop Swimming Pool

Note: for this problem you will need vectors.

The city has `n` buildings all connected in a row, each with its own height `h_<sub>i</sub>` for each building number `i`.

A very very very very rich trillionaire has bought all `n` buildings in the city, and wants to make a super super super long rooftop swimming pool. But to make the swimming pool, all the building must have the same height! So the very very very very rich trillionaire will add floors to each building until all the buildings are the same height.

Find the minimum total number of floors they need to build.

Also output how many extra floors will be added for each building.

## Input
One line with integer `n`, 1 <= n <= 100

Then, one line with space-separated integers follows: `h1 h2 … hn`
which is the height of each building, 1 <= height <= 10^6

## Output
One line with the total number of floors that are added.

Then, output another line with `n` space-separated integers:

`f1 f2 … fn`

Which are the number of floors that will be added to each building.

## Samples
### Sample Input 1
```
4
1 2 3 4
```

### Sample Output 1
```
6
3 2 1 0
```

**Explanation**: The best solution is to make all the buildings height 4. This means adding 3 floors to building 1, 2 floors to building 2, 1 floor to building 3, and adding no floors do building 4.

### Sample Input 2
```
1
10000
```

### Sample Output 2
```
0
0
```

**Explanation:** since there is only one building, “all” the buildings are already the same height so there is no need to add extra floors.