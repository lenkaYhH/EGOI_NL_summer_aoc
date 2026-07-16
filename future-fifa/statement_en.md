# Future FIFA

You just woke up from what seems like a very long nap.

> **You:** Where am I? What year is it?

*A strangely dressed man rises to his feet*

> **Stranger 1:** Ahh, I see you’ve awaken. I didn’t expect it so soon. The FreezeChamber 9000 must be broken!

*You notice a second man lounging on a sofa, playing FIFA. You watch intently and can’t help but notice the disheartening lack of improvements to the video game during your slumber.*

> **You**: Has FIFA not changed at all since I entered the FreezeChamber 9000?

> **Stranger 1**: Sure it has. There have been `n` improvements since you froze.

Since you know the FIFA games only receive `k` improvements every year, and you know you entered the FreezeChamber 9000 in the year 2026, you can determine what year it is.

Source: Kattis, [https://open.kattis.com/problems/fifa](https://open.kattis.com/problems/fifa)

## Input
One line with `n`, the total number of improvements there has been

One line with `k`, the improvements per year

## Output
One number - the current year

## Samples
### Sample input 1
```
5
5
```

### Sample output 1
```
2027
```
**Explanation**: Since FIFA makes 5 improvements in 1 year, and you observe a total of 5 improvements, so only one year has passed since 2026.

### Sample input 2
```
21
3
```

### Sample output 2
```
2033
```