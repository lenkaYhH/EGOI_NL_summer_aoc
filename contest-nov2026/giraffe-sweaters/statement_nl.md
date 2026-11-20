# Giraffentruien

Je wilt kersttruien kopen voor de $n$ giraffen in de dierentuin. 
Helaas zijn giraffentruien erg duur, dus je wilt ze allemaal in dezelfde maat kopen zodat het voor het truyenbedrijf goedkoper is om ze te maken. 

Maten voor giraffentruien zijn gebaseerd op neklengtes. Een giraffe past in een trui zolang de trui-maat niet meer dan $k$ cm verschilt van hun eigen lengte. 
Gegeven de lengte van elke giraffe, zal één trui-maat ze allemaal passen?

## Invoer
```
n k 
lengte_1 ... lengte_n
```

- één regel met de gehele getallen $n$ en $k$
- één regel met $n$ spatie-gescheiden gehele getallen: de lengte van elke giraffe

## Uitvoer
- kun je dezelfde maat kopen voor alle giraffen? Één regel met `ja` of `nee`

## Voorbeelden

### Voorbeeldinvoer 1
```
3 10
11 31 16
```

### Voorbeelduitvoer 1
```
ja
```

**Uitleg:** Als je maat 21 koopt, past iedereen omdat $21 - 11 = 10$, $21 - 16 = 5$ en $31 - 21 = 10$, wat allemaal $\le 10$ is.

### Voorbeeldinvoer 2
```
5 2
1 2 3 4 6
```

### Voorbeelduitvoer 2
```
nee
```

**Uitleg:** Er is geen manier om een maat te kopen die iedereen past. Als je maat 3 koopt, past de eerste giraffe wel maar de laatste niet ($6 - 3 > 2$). Als je maat 4 koopt, past de laatste giraffe wel maar de eerste niet.