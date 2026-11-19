# Licht aan, licht uit

Er staat een knop voor je. Als het licht aan is en je drukt op de knop, gaat het licht uit. Evenzo, als het licht uit is, zet de knop het licht weer aan.

Je drukt `n` keer op de knop en daarna ga je de kamer in om te zien of het licht aan of uit is na al die keren drukken. 

Stond het licht in de kamer oorspronkelijk aan?

## Invoer
```
n
observatie
```

- één regel met het gehele getal `n`, het aantal keren dat je op de knop drukt
- één regel met de string `observatie`, die `aan` is als het licht aan staat, en `uit` als het licht uit staat

# Uitvoer
Één regel met `ja` (als het licht oorspronkelijk aan stond) of `nee` (als het licht oorspronkelijk uit stond)

## Voorbeelden

### Voorbeeldinvoer 1
```
2
aan
```

### Voorbeelduitvoer 1
```
ja
```

**Uitleg:** met twee kliks en eindigend met het licht aan, ziet dit er zo uit:
- licht is aan &rarr; (klik) &rarr; licht is uit &rarr; (klik) &rarr; licht is aan 

### Voorbeeldinvoer 2
```
101
aan
```

### Voorbeelduitvoer 2
```
nee
```