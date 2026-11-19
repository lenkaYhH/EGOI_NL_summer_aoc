# Examens nakijken

Je docent moet $n$ examens nakijken, wat erg lang duurt. Helaas is niet ieders handschrift even goed, dus sommige examens duren nog langer. 
Elk examen heeft een eigen leesbaarheidsniveau $k$ tussen 0 en 100. Als het leesbaarheidsniveau lager is dan 40, is het examen moeilijk leesbaar.

Een normaal examen duurt 15 minuten om na te kijken, en als het examen moeilijk leesbaar is, duurt het 25 minuten om het examen na te kijken.
Hoe lang (in minuten) zal je docent bezig zijn met nakijken?

## Invoer
```
n
k1 k2 ... kn
```

- Één regel met $n$, het aantal examens
- Één regel met $n$ gehele getallen $k_1 \ k_2 \ \dots \ k_n$, de leesbaarheidsniveaus van de examens

## Uitvoer
Één regel met één geheel getal: hoe lang het duurt om de examens na te kijken in minuten.

## Voorbeelden

### Voorbeeldinvoer 1
```
1
40
```

### Voorbeelduitvoer 1
```
15
```

**Uitleg:** Één normaal examen om na te kijken duurt 15 minuten; het examen is normaal omdat het leesbaarheidsniveau niet kleiner is dan 40.

### Voorbeeldinvoer 2
```
1
39
```

### Voorbeelduitvoer 2
```
25
```

### Voorbeeldinvoer 3
```
4
61 80 75 96
```

### Voorbeelduitvoer 3
```
60
```