# Vector Oefening 1

Je krijgt een lijst met `N` getallen.

Daarna volgen `Q` bewerkingen. De bewerkingen kunnen een van de volgende zijn:

1. `a x`: voeg het gehele getal `x` toe aan de lijst
2. `b`: output het eerste getal van de lijst weer en verwijder het daarna. Als de lijst leeg is, geef `-1` weer
3. `c`: output het laatste getal van de lijst weer en verwijder het daarna. Als de lijst leeg is, geef `-1` weer
4. `d`: output de grootte van de huidige lijst weer
5. `e`: keer de volgorde van de lijst om
6. `f`: sorteer de lijst in oplopende volgorde
7. `g`: sorteer de lijst in aflopende volgorde
8. `h`: maak de lijst leeg

## Invoer

```text
N
num1 num2 ... numN
Q
<bewerking>
```

- Eén regel met `N`
- Eén regel met `N` getallen: de beginlijst
- Eén regel met `Q`, het aantal bewerkingen
- `Q` regels, elk met een bewerking zoals hierboven beschreven

## Uitvoer

Uitvoer is alleen vereist voor bewerking 2, 3 en 4. Druk elke uitvoer af op een nieuwe regel.

Vergeet niet om de extra libraries te toevoegen aan de header! (Of gebruik `#include <bits/stdc++.h>` in plaats van alle headers)

## Voorbeeld

### Voorbeeldinvoer 1

```text
5
1 2 3 4 5
6
a 6
b
d
h
d
b
```

### Voorbeelduitvoer 1

```text
1
5
0
-1
```

**Uitleg:**

- De lijst begint als: `{1, 2, 3, 4, 5}`
- Voeg `6` toe aan de lijst: `{1, 2, 3, 4, 5, 6}`
- Toon en verwijder het eerste element: `{2, 3, 4, 5, 6}` en geef `1` weer
- Toon de grootte van de lijst: `5` elementen
- Maak de lijst leeg: `{}`
- Toon de grootte van de lijst: `0` elementen
- Toon en verwijder het eerste element: omdat de lijst leeg is, is de uitvoer `-1`