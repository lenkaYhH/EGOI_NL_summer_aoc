# Odysseus


Before the very famous film director Christopher Nolan started filming *The Odyssey*, he travelled into Homer's original poem in order to get inspiration for his great movie.

There are a total of `n` places in this world (numbered `0` to `n-1`), where you know 0 is the start and place number `n-1` is Odysseus' home (where he ends).

Because `n` is so large, Christopher Nolan has a lot of difficulty tracking down the route Odysseus took to get home. Just when he was about to give up, one of the Ancient Greek gods appeared and gave him a magical scroll with `n` numbers that showed where Odysseus went after leaving place number `i`. You will now help him reconstruct the path Odysseus took to get home.

Specifically, given a list of numbers `a0 a1 a2 ...`, the first number is where Odysseus went after leaving place number 0, the second number is where Odysseus went after leaving place number 1...etc. The list is only `n-1` numbers long because once Odysseus gets home (place `n-1`), he does not go anywhere anymore. 

Additionally, it is guaranteed:
- Odysseus never gets stuck to a place (mathematically, `ai` is never equal to `i`)
- Odysseus never goes to the same place twice (i.e. all numbers in the list are distinct)
- Odysseus never goes back to the start (place number 0) (i.e. 0 is not in the list)

Note that Odysseus might not have visited all `N` places in his route (see samples for more explanations). 

## Input
```
n
a0 a1 a2 ... a(n-2)
```

- One line with integer `n`, the number of places (`2 <= n <= 100000`)
- One line with n-1 integers, describing the next stop of each place 

## Output
A list of space-separated integers, starting with `0` and ending with `n-1`, describing the route Odysseus took in order.

## Samples
### Sample Input 1
```
4
1 3 2
```

### Sample Output 1
```
0 1 3 
```
**Explanation:** There are a total of 4 places, with 0 being the start and place number 3 being Oddysseus' home. 

- Oddysseus starts at place number 0. Position 0 of the list has value 1, which means the next place Odysseus goes to is place number 1.
- Odysseus is at place number 1. Position 1 of the list has the value 3. This means the next place Odysseus visit is place number 3.
- Oddyseys is at place number 3, which is his home. Therefore, his journey ends here. 

So the total route he took is 0 => 1 => 3. Note that in this case, place number 2 was never visited because he got home before going to place 2 and his journey always ends when he reaches home. 

### Sample Input 2
```
7
5 2 3 4 6 1
```

### Sample Output 2
```
0 5 1 2 3 4 6
```

**Explanations:** 
Odysseus start at place = 0
- At place 0, next place = 5 (because position 0 in the list has value 5)
- At place 5, next place = 1 (because position 5 in the list has value 1)
- At place 1, next place = 2
- At place 2, next place = 3
- At place 3, next place = 4
- At place 4, next place = 6
- At place 6, Odysseus is home