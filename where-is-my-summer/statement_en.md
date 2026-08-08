# Where is my summer?

Summer holiday seems to fly by once again. But something is very weird this year: you feel like this year's summer is shorter than usual! Confused, you check your agenda and realize you might have miscounted the number of days that are left.

Specifically, in your `n` days of summer holidays, you did `k` activities where activity number `i` took `d_i` days. If you add up all the days you spent doing the `n` activites, you can know if you miscounted how many days already passed and know how many days of your summer you still have left! (You only do one activity per day.)

## Input
```
n k
d1 d2 d3 ... d_k
```
- One line with `n`, the number of days of your summer holiday; and `k`, the number of activities you did
- One line with k numbers: how many days each activity took

## Output
One line, the number of days that are left in your summer.
It is guaranteed that the number of days that are left is equal to or greater than 0.

## Sample
### Sample Input 1
```
60 5
12 10 10 10 10
```
### Sample Output 1
```
8
```

**Explanation:** You did 5 activities, taking a total of 12+10+10+10+10=52 days. Since your holidays has 60 days, you still have 8 days of holiday left!