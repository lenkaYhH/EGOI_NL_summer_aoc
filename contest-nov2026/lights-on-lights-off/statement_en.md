# Lights On, Lights Off

There is a button in front of you. If the light is on and you click the button, the lights will turn off. Similarly, if the light is off, the button turns the light on.

You click the button `n` times, and then you go into the room to see whether the lights are on or off after so many clicks. 

Were the lights in the room originall on?

## Input
```
n
observatie
```

- one line with integer `n`, number of times you click the button
- one line with string `observation`, which is `aan` if the light is on, `uit` if the light is off

# Output
One line with `ja` (if the light was initially on) or `nee` (if the light was initially off)

## Samples

### Sample Input 1
```
2
aan
```

### Sample Output 1
```
ja
```

**Explanations:** with two clicks and ending with lights on, it looks like this
- light is on -> (click) -> light is off -> (click) -> light is on 

### Sample Input 2
```
101
aan
```

### Sample Output 2
```
nee
```