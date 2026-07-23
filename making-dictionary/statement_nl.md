# Een Woordenboek Maken

Het is het jaar 3026 en de menselijke taal is volledig ontspoord dankzij het internet en de brainrot van sociale media.

Helaas heb jij de taak gekregen om een woordenboek van deze bizarre woorden te maken.

Gegeven twee strings, bepaal welke lexicografisch kleiner is (oftewel: welke eerder in een woordenboek komt). De twee woorden hebben gegarandeerd dezelfde lengte. De woorden kunnen zowel hoofdletters als kleine letters bevatten, maar bij het vergelijken maak je geen onderscheid tussen hoofdletters en kleine letters.

Bron: Codeforces Beta Round 85, Problem A, <https://codeforces.com/problemset/problem/112/A>

## Invoer
```text
woord1
woord2
```

Twee regels, elk met één woord.

## Uitvoer

Print één regel met `-1`, `0` of `1`.

- Als het eerste woord lexicografisch kleiner is dan het tweede woord, print `-1`.
- Als beide woorden lexicografisch gelijk zijn, print `0`.
- Als het tweede woord lexicografisch kleiner is dan het eerste woord, print `1`.

## Voorbeelden

### Voorbeeldinvoer 1

```text
sixseven
SiXSeVen
```

### Voorbeelduitvoer 1

```text
0
```

**Uitleg:**  
Omdat alle letters hetzelfde zijn (hoofdletters en kleine letters maken niet uit), zijn de twee woorden gelijk.

### Voorbeeldinvoer 2

```text
aBDd
abcd
```

### Voorbeelduitvoer 2

```text
1
```

**Uitleg:**

- De eerste letters `a` en `a` zijn gelijk, dus we vergelijken de volgende letter.
- De tweede letters `B` en `b` zijn ook gelijk, dus we vergelijken de volgende letter.
- De derde letters `D` en `c`: `c` is lexicografisch kleiner dan `D`, dus het tweede woord is kleiner. (Hoofdletters en kleine letters worden als gelijk beschouwd, waardoor de gebruikelijke voorrang die vaak aan hoofdletters wordt gegeven, wordt genegeerd.)