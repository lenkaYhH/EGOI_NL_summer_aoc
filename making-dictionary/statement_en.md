# Making a Dictionary

It is the year 3026 and human language has completely gone crazy thanks to the internet and social media brainrot.

Unfortunately, you have been tasked to make a dictionary of these crazy words.

Given two strings, compare which of them is lexicographically smaller (i.e. goes in front of the other in a dictionary). The two words are guaranteed to be of the same length. The words may contain both capital and lower case letters, but when comparing the two words you do not care whether it is uppercase or lowercase.


Source: Codeforces Beta Round 85, Problem A, <https://codeforces.com/problemset/problem/112/A>

## Input
```
woord1
woord2
```
Two lines, each with one word

## Output
One line with -1, 0, or 1
- If the first word is smaller than the second word, print -1
- If both words are lexicographically equal, print 0
- If the second word is smaller than the first word, print 1

## Samples
### Sample Input 1
```
sixseven
SiXSeVen
```

### Sample Output 1
```
0
```

**Explanation:** 
Since all the letters are the same (upper and lower case does not matter), the two strings are equal. 

### Sample Input 2
```
aBDd
abcd
```

### Sample Output 2
```
1
```
- first letter a are the same, so we compare the next letter
- second letter b and B are also the same, so we compare the next letter
- third letter c is smaller than D, so the second string is smaller!