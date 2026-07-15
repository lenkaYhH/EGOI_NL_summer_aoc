# Rupsje Nooitgenoeg

Rupsje Nooitgenoeg heeft heel erg veel honger. Gelukkig liggen er `n` stukken voedsel voor hem! Rupsje Nooitgenoeg eet al het voedsel* op, en doet dat in de gegeven volgorde.

Helaas is niet al het voedsel gezond. Voedsel nummer `i` heeft een gezondheidswaarde `hi`. Wanneer de rups dit voedsel eet, verandert haar HP (gezondheidspunten) met `hi`. Als `hi` positief is, krijgt de rups HP erbij. Als het voedsel giftig is, is `hi` negatief en verliest de rups HP.

Rupsje Nooitgenoeg sterft zodra zijn HP op enig moment kleiner wordt dan 0. Let op: bij precies 0 HP leeft de rups nog.

*Natuurlijk als Rupsje Nooitgenoeg sterft voordat al het voedsel is opgegeten, wordt de rest van het voedsel niet meer opgegeten (zie voorbeeld 2).

Gelukkig heb jij de kracht van tijdreizen ontdekt en kun je alle jeugdherinneringen redden door te voorkomen dat Rupsje Nooitgenoeg sterft. Je gaat terug in de tijd en zegt tegen de rups `Ja` of `Nee`, afhankelijk van of ze het voedsel wel of niet moet eten.

## Invoer

De eerste regel bevat een geheel getal `n` (`1 <= n <= 10^5`), het aantal stukken voedsel dat voor de rups ligt.

De tweede regel bevat `n` gehele getallen die de gezondheidswaarden van het voedsel in volgorde voorstellen:

`h1 h2 … hn`

waarbij:

`-10^4 <= hi <= 10^4`

## Uitvoer

Print wat je tegen de rups zult zeggen:

- `Ja` als de rups alle voedsel zal overleven.
- `Nee` als de rups onderweg zal sterven en het voedsel dus niet moet eten.

(Let goed op de spelling en hoofdletters!)

## Voorbeelden

### Voorbeeldinvoer 1

```text
3
5 -2 1
```

### Voorbeelduitvoer 1

```text
Ja
```

De rups begint met HP = 0.

- Na voedsel 1: HP = 0 + 5 = 5 (leeft nog)
- Na voedsel 2: HP = 5 − 2 = 3 (leeft nog)
- Na voedsel 3: HP = 3 + 1 = 4 (leeft nog)

Omdat Rupsje Nooitgenoeg niet sterft, kan hij al het voedsel opeten.

### Voorbeeldinvoer 2

```text
5
2 -3 8 100 1000
```

### Voorbeelduitvoer 2

```text
Nee
```

De rups begint met HP = 0.

- Na voedsel 1: HP = 0 + 2 = 2 (leeft nog)
- Na voedsel 2: HP = 2 − 3 = -1 (de rups sterft)

Omdat de rups al gestorven is, kan ze de rest van het voedsel niet meer opeten.

Je gaat terug in de tijd en zegt tegen de rups dat ze het voedsel niet moet eten.

### Voorbeeldinvoer 3

```text
3
1348 5630 -6978
```

### Voorbeelduitvoer 3

```text
Ja
```

De rups begint met HP = 0.

- Na voedsel 1: HP = 0 + 1348 = 1348 (leeft nog)
- Na voedsel 2: HP = 1348 + 5630 = 6978 (leeft nog)
- Na voedsel 3: HP = 6978 − 6978 = 0 (leeft nog)

Omdat Rupsje Nooitgenoeg niet sterft, kan hij al het voedsel opeten.