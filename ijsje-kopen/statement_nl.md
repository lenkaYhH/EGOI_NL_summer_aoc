# Ijsje Kopen
Uil wil met Aubergine (de mascotte van het nederlandse IOAI team) een ijsje gaan kopen. Ze hebben hun geld echter niet goed georganiseerd: hun geld is verdeeld over `n` verschillende spaarpotten, waar spaarpot nummer `i` heeft `ti` euros.

Uil en Aubergine hebben samen `x` euro nodig voor hun ijsjes.
Geef de waardes van de twee spaarpotten die samen precies `x` euro bevatten. 

Het is gegarandeerd dat er een geldige oplossing is.

Deze opgave is de makkelijker versie van [CSES 1640](https://cses.fi/problemset/task/1640/), dus je kunt CSES 1640 ook proberen nadat je deze opgave hebt opgelost.  

## Invoer
```
n x
t1 t2 t3 ... tn
```
- Één regel met het aantal spaarpotten, `n`, `2 <= n <= 10^4`; en `x`, de kost van de ijsjes
- Één regel met `n` getallen: hoeveel geld er in elke pot zit

## Uitvoer
Één regel met twee waardes: de waardes van de twee spaarpotten die samen precies `x` euro bevatten. 

## Voorbeelden
### Voorbeeldinvoer 1
```
5 10
1 2 3 4 9

```

### Voorbeelduitvoer 1
```
1 9
```
Er zijn 5 spaarpotten en je wilt precies 10 euros.
Je hebt 10 euros als je 1 euro (van spaarpot 1) en 9 euros (van spaarpot 5) samenvoegt.
