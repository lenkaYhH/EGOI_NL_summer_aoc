def solve(items):
    tot = sum(items)

    divBy7 = tot % 7 == 0
    divBy11 = tot % 11 == 0

    if tot >= 100:
        tot *= 0.9
    elif tot >= 50:
        tot *= 0.95
    
    if divBy7:
        tot -= 7
    
    if divBy11:
        tot -= 1
    
    return round(tot, 2)