# Syntax Error

You have been using the built-in textbox in Cuttle to code your problems, and very annoyingly it does not have a built-in feature to warn you when you forget to close your brackets!

So, you have decided you will build your own warning system:
for a string made of `(` and `)`, determine whether it is a valid string. A string is considered valid if for every `(`, it can be paired with a `)` after it. 

Bonus problem: also solve Delimeter Soup on Kattis (<https://open.kattis.com/problems/delimitersoup>)

## Input
One line with a string made out of `(` and `)`
It is guaranteed that the string is made out of at most 1000 characters. 

## Output
One line:
- `ERROR!`, if the brackets are not placed correctly
- `NO BUG!`, if the brackets are placed correctly

## Samples
### Sample Input 1
```
()()(())
```

### Sample Output 1
```
NO BUG!
```

**Explanation:** Every `(` can be matched with a `)` afterwards. 

### Sample Input 2
```
)()()
```

### Sample Output 2
```
ERROR!
```

**Explanation:** There is no way to match the first `)`.