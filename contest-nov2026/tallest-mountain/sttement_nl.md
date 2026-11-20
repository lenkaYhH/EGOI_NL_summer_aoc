# Hoogste berg

Je hebt zojuist een bergen-verplaatsmachine uitgevonden! Nederland krijgt eindelijk een berg!!

Je hebt besloten dat als je toch een berg gaat verplaatsen, je de beste kiest, en de beste berg is de hoogste berg.

Je hebt een kaart met $n$ rijen en $m$ kolommen, en elk vakje bevat een berg met hoogte $h$. Welke berg moet je verplaatsen?
Geef de coördinaten van de berg. Merk op dat de bovenste rij rij 1 is en de meest linkse kolom kolom 1 is.

## Invoer
```
n m
rij1_kol1 rij1_kol2 ... rij1_kolm
rij2_kol1 rij2_kol2 ... rij2_kolm
...
rijn_kol1 rijn_kol2 ... rijn_kolm
```

- één regel met `n` en `m`
- de volgende `n` regels bevatten elk `m` getallen. Elk getal geeft de hoogte van de berg aan

Het is gegarandeerd dat de grootte van het raster ($n \times m$) niet groter is dan $10^8$.

## Uitvoer
```
rij kolom
```
- één regel met twee gehele getallen: de coördinaat van de hoogste berg

## Voorbeelden

### Voorbeeldinvoer 1
```
2 3
1 1 5
2 1 3
```

### Voorbeelduitvoer 1
```
1 3
```

**Uitleg:** de hoogste berg heeft hoogte 5, op de 1e rij van boven (rij 1) en de 3e kolom van links (kolom 3).

### Voorbeeldinvoer 2
```
1 1
10000000
```

### Voorbeelduitvoer 2
```
1 1
```