# Waar is mijn vakantie?

De zomervakantie lijkt weer voorbij te vliegen. Maar er is dit jaar iets heel vreemds: je hebt het gevoel dat de zomer dit jaar korter is dan normaal! Verward bekijk je je agenda en realiseer je je dat je misschien verkeerd hebt geteld hoeveel dagen er nog over zijn.

Je hebt in totaal `n` dagen zomervakantie en hebt `k` activiteiten gedaan. Activiteit nummer `i` duurde `d_i` dagen. Als je alle dagen optelt die je aan de activiteiten hebt besteed, kun je bepalen of je verkeerd hebt geteld hoeveel dagen er al voorbij zijn en hoeveel dagen van je zomer je nog over hebt! (Je doet slechts één activiteit per dag.)

## Invoer

```text
n k
d1 d2 d3 ... d_k
```

* Eén regel met `n`, het aantal dagen van je zomervakantie, en `k`, het aantal activiteiten dat je hebt gedaan.
* Eén regel met `k` getallen: hoeveel dagen elke activiteit duurde.

## Uitvoer

Print op één regel het aantal dagen dat nog over is van je zomervakantie.

Het is gegarandeerd dat het aantal resterende dagen gelijk is aan of groter is dan `0`.

## Voorbeeld

### Voorbeeld invoer 1

```text
60 5
12 10 10 10 10
```

### Voorbeeld uitvoer 1

```text
8
```

**Uitleg:** Je hebt 5 activiteiten gedaan, die in totaal `12 + 10 + 10 + 10 + 10 = 52` dagen duurden. Omdat je zomervakantie 60 dagen duurt, heb je nog `60 - 52 = 8` dagen zomervakantie over!
