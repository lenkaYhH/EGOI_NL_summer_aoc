# Afval

Uil is aan het opruimen na een EGOI-training. Er zijn `n` vuilniszakken, elk met een verschillend gewicht (vuilniszak `i` heeft gewicht `w_i`).

Tijdens één wandeling naar buiten kan Uil één of twee vuilniszakken meenemen, zolang het totale gewicht niet groter is dan `m`.

Gegeven de vuilniszakken en hun gewichten, bepaal hoeveel keer Uil naar buiten moet lopen om al het afval weg te brengen.

## Invoer

```text
n m
w1 w2 ... wn
```

- Eén regel met twee gehele getallen: `n` is het aantal vuilniszakken en `m` is het maximale gewicht dat Uil in één keer kan dragen.
- Eén regel met `n` gehele getallen: het gewicht van elke vuilniszak. Er geldt dat geen enkele vuilniszak zwaarder is dan wat Uil kan dragen (dus `w_i <= m` voor alle `i`).

## Uitvoer

Print één geheel getal: het minimale aantal wandelingen dat Uil nodig heeft om al het afval weg te brengen.

## Voorbeelden

### Voorbeeld 1

#### Invoer
```text
6 10
1 2 8 9 3 3
```

#### Uitvoer
```text
3
```

#### Uitleg

Uil kan bijvoorbeeld eerst vuilniszak 1 en 4 meenemen (`1 + 9 = 10`), daarna vuilniszak 2 en 3 (`2 + 8 = 10`), en ten slotte de laatste twee vuilniszakken (totaalgewicht `6`). Ook andere indelingen met 3 wandelingen zijn mogelijk.

### Voorbeeld 2

#### Invoer
```text
3 5
4 4 4
```

#### Uitvoer
```text
3
```

#### Uitleg

Uil moet drie keer lopen, telkens met één vuilniszak van gewicht `4`. Het is niet mogelijk om twee vuilniszakken tegelijk mee te nemen zonder het maximale gewicht van `5` te overschrijden.