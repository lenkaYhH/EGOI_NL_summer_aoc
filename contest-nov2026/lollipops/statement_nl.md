# Lolly's

Er zijn $2n$ lolly's. Elke lolly heeft een heerlijkheidsniveau $d$.
Elke ronde krijg je 2 lolly's te zien en je mag er slechts één kiezen. De lolly die je niet kiest, wordt weggegooid en komt niet meer terug.

Wat is de maximale totale heerlijkheid die je kunt behalen?

## Invoer
```
n
d_1 d_2
...
d_2n d_2n+1
```

- Één regel met $n$, het aantal rondes
- Daarna volgen er $n$ regels die de heerlijkheid van de twee lolly's van die ronde tonen

Het is gegarandeerd dat de som van alle heerlijkheden kleiner is dan $10^8$.

# Uitvoer
Één regel met de maximale heerlijkheid die je kunt behalen.

## Voorbeelden

### Voorbeeldinvoer 1
```
2
1 2
3 4
```

### Voorbeelduitvoer 1
```
6
```

**Uitleg:** de beste keuze is om in de eerste ronde de lolly te nemen met heerlijkheid 2, en in de tweede ronde de lolly met heerlijkheid 4. Dit geeft een totaal van $2 + 4 = 6$.

### Voorbeeldinvoer 2
```
1
5 7
```

### Voorbeelduitvoer 2
```
7
```