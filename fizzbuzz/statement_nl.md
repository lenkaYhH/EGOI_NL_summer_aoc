# Fizz Buzz

Print de getallen van **1 tot en met `n`** , met de volgende voorwaarden:

- Als het getal deelbaar is door `x`, geef dan **`fizz`** in plaats van het getal.
- Als het getal deelbaar is door `y`, geef dan **`buzz`** in plaats van het getal.
- Als het getal deelbaar is door zowel `x` als `y`, geef dan **`fizzbuzz`** weer.

## Invoer

```text
n x y
```
Op één regel, gescheiden door spaties.

## Uitvoer

Geef `n` waarden weer op één regel, gescheiden door spaties. Elke waarde is een getal, `fizz`, `buzz` of `fizzbuzz`.

## Voorbeelden

### Voorbeeldinvoer 1

```text
15 3 5
```

### Voorbeelduitvoer 1

```text
1 2 fizz 4 buzz fizz 7 8 fizz buzz 11 fizz 13 14 fizzbuzz
```

### Uitleg

- 3, 6, 9 en 12 zijn deelbaar door 3, dus worden vervangen door **`fizz`**.
- 5 en 10 zijn deelbaar door 5, dus worden vervangen door **`buzz`**.
- 15 is deelbaar door zowel 3 als 5, dus wordt vervangen door **`fizzbuzz`**.
- De overige getallen blijven ongewijzigd.
