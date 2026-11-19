# Grading Exams

Your teacher needs to grade `n` exams, which takes very long. Unfortunately, not everyone's handwriting is very good so some exams take even longer. 
Every exam has its own readibility level `k` between 0 and 100, where if the readability level is lower than 40 then the exam is difficult to read. 

A normal exam takes 15 minutes to grade, and if the exam is difficult to read, it takes 25 minutes to grade the exam.
How long (in minutes) will your teacher spend on grading?

## Input
```
n
k1 k2 ... kn
```

## Output
One line with one integer: how long it takes to grade the exam in minutes

## Samples
### Sample input 1
```
1
40
```

### Sample output 1
```
15
```
One normal exam to grade is 15 minutes; the exam is normal because its readibility level is not smaller than 40.

### Sample input 2
```
1
39
```

### Sample output 2
```
25
```

### Sample input 3
```
4
61 80 75 96
```

### Sample output 3
```
60
```