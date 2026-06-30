# Plane spotting

Uil en Giraffe zijn vliegtuigen aan het spotten op Schiphol. Ze komen aan op tijdstip `a` en vertrekken op tijdstip `b`.
Er zijn in totaal `n` vliegtuigen die die dag opstijgen: het i-de vliegtuig stijgt op op tijdstip `ti`.

Let op: als een vliegtuig opstijgt op hun aankomsttijd `a`, dan zien ze dat vliegtuig. Maar als een vliegtuig opstijgt op hun vertrektijd `b`, dan zien ze het vliegtuig niet, omdat ze dan al vertrekken.

Tel hoeveel vliegtuigen ze zien opstijgen.

## Input

Eén regel met drie spatie-gescheiden gehele getallen:
`n a b`

Hierbij is `n` het aantal vliegtuigen, `a` het tijdstip waarop Uil en Giraffe op Schiphol aankomen, en `b` het tijdstip waarop ze vertrekken. Er geldt altijd dat `b > a` (dus de vertrektijd is altijd na de aankomsttijd).

Daarna volgt één regel met `n` spatie-gescheiden gehele getallen (`t1 t2 t3 ...`), waarbij elk getal het opstijgtijdstip van een vliegtuig aangeeft. (Er kunnen meerdere vliegtuigen op hetzelfde tijdstip opstijgen!)

## Output

Eén regel met het aantal vliegtuigen dat ze zien opstijgen.

## Voorbeelden

### Voorbeeld invoer 1

```
4 1 5
1 2 4 5
```

### Voorbeeld uitvoer 1

```
3
```

#### Uitleg voorbeeld 1

Uil en Giraffe komen aan op tijdstip 1 en vertrekken op tijdstip 5.
Er zijn 4 vliegtuigen, die opstijgen op:

* t1 = 1 (gezien!)
* t2 = 2 (gezien!)
* t3 = 4 (gezien!)
* t4 = 5 (niet gezien, omdat ze al aan het vertrekken zijn)

Ze zien in totaal 3 vliegtuigen opstijgen.

### Voorbeeld invoer 2

```
5 1 3
1 1 1 1 1
```

### Voorbeeld uitvoer 2

```
5
```

#### Uitleg voorbeeld 2

Uil en Giraffe komen aan op tijdstip 1 en vertrekken op tijdstip 3.
Er zijn 5 vliegtuigen, die opstijgen op:

* t1 = 1 (gezien!)
* t2 = 1 (gezien!)
* t3 = 1 (gezien!)
* t4 = 1 (gezien!)
* t5 = 1 (gezien!)

Ze zien alle 5 vliegtuigen!
