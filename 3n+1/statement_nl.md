# 3n+1

Uil vond onlangs het beroemde [Vermoeden van Collatz](https://nl.wikipedia.org/wiki/Vermoeden_van_Collatz) interessant, waarbij je voor een getal `n` de volgende regels toepast:

* deel door 2 als `n` even is;
* vermenigvuldig met 3 en tel er vervolgens 1 bij op als `n` oneven is.

Als je dit proces blijft herhalen, kom je uiteindelijk altijd uit op het getal 1.

Bijvoorbeeld voor `n = 10`:

`10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1`

Gegeven `n`, help Uil om alle getallen in deze rij tot aan 1 te vinden.

Deze opgave komt uit [CSES Problem Set Task 1068](https://cses.fi/problemset/task/1068).

## Invoer
Eén regel met een integer `n`.

## Uitvoer

Print op één regel alle getallen die voorkomen terwijl je van `n` naar `1` gaat, gescheiden door spaties.

Vergeet niet om ook het oorspronkelijke getal aan het begin en `1` aan het einde!

## Voorbeeld

### Voorbeeldinvoer 1

`10`

### Voorbeelduitvoer 1

`10 5 16 8 4 2 1`
