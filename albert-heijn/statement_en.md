# Albert Heijn

Uil has started working at the Albert Heijn, but the machine at the cashier is broken! Help Uil calculate the total cost for the `t` costumers, taking into account the discounts currently offered. 

**Discount Rules**:

a. If the total cost before any discount is over or equal to 50 euros, they get 5% off their total

b. If the total cost before any discount is over  or equal to 100 euros, they get 10% off their total (if this applies, then (a) does not apply)

c. If the total cost before any discount is divisible by 7, they get 7 euros off their total

d. if the total cost before any discount is divisble by 11, they get 1 euro off 

e. If the total before any discount is divisible by 7 and 11, then both c and d applies at the same time. 

f. If the total before any discount is over 50 euros or 100 euros, AND it's divisible by 7 or 11, you first apply discount a (or b) before applying discount c (or d). 


# Input
First line has integer `t` that describes the number of customers. 

Then, there are `t` lines that follow.
Each line begin with number `n`, which describes the number of items this person has bought. Then, in the same line, there will be the cost of the `n` items, separated by space. 

```
t
n_1 item_1 item_2 item_3.... item_nt
...
n_t item_1 item_2 ... item n_t
```

# Output
Output `t` lines, each line with how much the customer needs to pay (after discount).


# Sample
## Sample Input 
```
3
4 10 10 10 10
5 10 10 10 10 10
1 77
```
## Sample Output 
```
40
47.5
65.15
```

**Explanation**:

There are a total of 3 customers.

Customer 1:
Original cost before discount is 10+10+10+10=40. 
No discount rule applies.

Customer 2:
Original cost before discount is 10+10+10+10+10=50.
Discount rule a. applies so final cost is 50-50*0.95 = 47.5 euros.

Customer 3:
Original cost before discount is 77 euros. Discount a, c, d, all applies. 
First applying discount a makes it 73.15 euros. Then, discount c and d makes it 65.15 euros. 

