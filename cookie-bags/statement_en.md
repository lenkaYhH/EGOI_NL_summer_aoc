# Cookie Bags

There are many red and blue cookie bags on the table: each red cookie bag has 3 cookies and each blue cookie bag has 1. Uil and Giraf want to claim the cookies, but in a fair way. They will take turn picking the cookie bags for themselves (the cookies inside the bags they pick will belong to them), until there are no more cookie bags left. Note that Uil always starts picking the cookie bags.

Assuming both Uil and Giraf are very greedy and will always pick the bag that gives them as many cookies as possible- how many cookies will Uil get?

## Input 
One line with two space-separated integers,
`r b`

Where `r` is the number of red cookie bags and `b` is the number of blue cookie bags

`0 <= r <= 10^6`

`0 <= b <= 10^6 `

## Output
One number, which is the number of cookies Uil gets 

## Samples
### Sample Input 1
```
2 1
```

### Sample output 1
4 

**Explanation**: 
There are 2 red cookie bags and 1 blue cookie bag on the table.
Uil starts by taking a red cookie bag (3 cookies)
Giraf takes the other red cookie bag (because Giraf is greedy and will also try to take as many cookies as he can)
Uil takes the remaining one blue cookie bag (1 cookie)

Uil gets a total of 3+1 = 4 cookies, which is the maximum possible they can get 

