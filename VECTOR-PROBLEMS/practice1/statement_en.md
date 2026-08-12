# Vector Practice 1

You have are given a list of `N` numbers.
Then `Q` operations will follow. The operations can be any of the following:

1. `a x`: add integer x to the list
2. `b`: output the first number in the list and then remove it. If there is nothing in the list, output `-1`
3. `c`: output the last number in the list and then remove it. If there is nothing in the list, output `-1`
4. `d`: output the size of the current list
5. `e`: reverse the list
6. `f`: sort the list in ascending order
7. `g`: sort the list in descending order
8. `h`: clear the list

## Input
```
N
num1 num2 ... numN
Q
<operation>
```
- One line with `N`
- One line with N numbers: your starting list
- One line with `Q`, the number of operations
- Q lines, each with an operation as described before

## Output
Output is only required for operation 2, 3, or 4. Print each output on a new line.

## Sample
### Sample Input 1
```
5
1 2 3 4 5
6
a 6
b
d
h
d
b
```

### Sample Output 1
```
1
5
0
-1
```
**Explanation:**
- The list begins as: {1, 2, 3, 4, 5}
- Add 6 to the list: {1, 2, 3, 4, 5, 6} 
- Print and remove first item: {2, 3, 4, 5, 6} and output 1
- Print the size: 5 items
- Clear the list: {}
- Print the size: 0 items
- Print and remove first item: because the list is empty, output is -1