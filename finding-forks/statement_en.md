# Finding Forks 
Source: BAPC Preliminaries 2023, <https://open.kattis.com/problems/findingforks>

Your cutlery drawer contains many types of forks. Each with their own purpose, and *each with its own place* in the cutlery drawer. After a nice dining party with all your friends, disaster struck! You put all the used forks in the dishwasher, but now you are unsure where to put back some of the forks, because *at least two places in the cutlery drawer are empty*! And worse, you do not remember which type of fork belongs where!

What is the minimum number of forks that must have been in the dishwasher to cause this confusion?

## Input
The input consists of:

- One line with an integer `n`, the number of types of forks. `2 <= n <= 10^5`
- One line with n integers: the number of forks of each type. Each fork type can have any number between 1 and 10^9 forks. 

## Output
Output the minimum number of forks that must have been in the dishwasher.

## Samples
### Sample Input 1
```
3
4 9 5
```

### Sample Output 1
```
9
```

**Explanation:** You have 3 types of forks: 4x fork 1, 9x fork 2 and 5x fork 3. 
If you put all of fork 1 and fork 3 into the dishwasher (total of **9 forks**), two places in the cutlery drawer are empty and you don't know which space belongs to fork 1 and which to fork 3. This is also the minimum number of forks (i.e. the best solution).

Other options (that give worse solutions) are:
- putting fork 1 and fork 2 into the dishwasher, a total of 13 forks
- putting fork 2 and fork 3 into the dishwasher, a total of 14 forks

### Sample Input 2
```
10
18 39 5 12 1000000000 54 23 11 123 31415
```

### Sample Output 2
```
16
```

**Explanation:** The best solution is to put fork 3 (5 forks) and fork 8 (11 forks) into the dishwasher (total of 16 forks), and end up with two empty places in the cutlery drawer.