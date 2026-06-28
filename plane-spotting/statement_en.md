# Plane Spotting

Uil and Giraffe are spotting planes at schiphol. They arrive at time `a` and leave at time `b`.
There are a total of `n` airplanes taking off that day: the i-th airplane takes off at a time `ti`.

Note that if a plane takes off at their arrival time `a`, they will see the plane. But if the plane takes off at leaving time `b`, they will not see the plane because they are leaving.
Count how many planes they will see taking off.

## Input
One line with three space-separated integers,
`n a b`

Where `n` is the number of airplanes, `a` is when Uil and Giraffe gets to Schiphol, and `b` is when they leave schiphol. It is guaranteed b > a (i.e. leaving time is always after arrival time)

Then, one line with `n` space-separated integers will follow (t1 t2 t3 ...etc), each integer describing the take-off time of one airplane (there can be multiple airplanes taking off at the same time!). 

## Output
One line with the number of planes they see taking off


## Sample

### Sample Input 1
```
4 1 5
1 2 4 5
```

### Sample Output 1
```
3
```

#### Sample 1 Explanation
Uil and Giraffe arrive at time 1 and leave at time 5. 
There are 4 airplanes, the airplanes take off at:
- t = 1 (spotted!)
-  t = 2 (spotted!)
- t = 4 (spotted!)
- t = 5 (not spotted, because they are leaving)

They will spot a total of 3 airplanes. 

### Sample Input 2
```
5 1 3
1 1 1 1 1
```

### Sample Output 2
```
5
```

#### Sample 2 Explanation
Uil and Giraffe arrive at time 1 and leave at time 3. 
There are 5 airplanes, all taking off at t=1.
They will spot all 5 airplanes! 