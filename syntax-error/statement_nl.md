# Syntax Error

Je hebt de ingebouwde teksteditor in Cuttle gebruikt om je opgaven te programmeren, en het is erg vervelend dat deze geen ingebouwde functie heeft die je waarschuwt wanneer je vergeet je haakjes te sluiten!

Daarom heb je besloten om je eigen waarschuwingssysteem te bouwen:
voor een string die bestaat uit `(` en `)`, bepaal je of deze een geldige string is. Een string is geldig als voor elke `(` een bijbehorende `)` erna kan worden gevonden.

Bonusprobleem: los ook Delimiter Soup op Kattis op (<https://open.kattis.com/problems/delimitersoup>).

## Invoer

Eén regel met een tekenreeks die bestaat uit `(` en `)`.

Het is gegarandeerd dat de tekenreeks uit maximaal 1000 tekens bestaat.

## Uitvoer

Eén regel:

- `ERROR!`, als de haakjes niet correct geplaatst zijn.
- `NO BUG!`, als de haakjes correct geplaatst zijn.

## Voorbeelden

### Voorbeeldinvoer 1
```
()()(())
```

### Voorbeelduitvoer 1
```
NO BUG!
```

**Uitleg:** Elke `(` kan worden gekoppeld aan een `)` die erna komt. 

### Voorbeeldinvoer 2
```
)()()
```

### Voorbeelduitvoer 2
```
ERROR!
```
**Uitleg:** Er is geen manier om de eerste `)` te koppelen.
