# Zwembad op de Daken

*Voor deze opgave heb je vectors nodig.

De stad heeft `n` gebouwen die op een rij met elkaar verbonden zijn. Elk gebouw heeft een hoogte `h_i`, waarbij `i` het nummer van het gebouw is.

Een héél héél héél rijke triljonair heeft alle `n` gebouwen in de stad gekocht en wil een super super super lang zwembad op de daken bouwen. Om dit zwembad te kunnen maken, moeten alle gebouwen echter dezelfde hoogte hebben! Daarom zal de triljonair extra verdiepingen toevoegen aan de gebouwen totdat ze allemaal even hoog zijn.

Bepaal het minimale totale aantal verdiepingen dat moet worden bijgebouwd.

Geef ook aan hoeveel extra verdiepingen aan elk gebouw worden toegevoegd.

## Invoer

Eén regel met een geheel getal `n`, waarbij:

`1 <= n <= 100`

Daarna volgt één regel met `n` door spaties gescheiden gehele getallen:

`h1 h2 … hn`

Dit zijn de hoogtes van de gebouwen, waarbij:

`1 <= hoogte <= 10^6`

## Uitvoer

Print op de eerste regel het totale aantal toegevoegde verdiepingen.

Print vervolgens op de tweede regel `n` door spaties gescheiden gehele getallen:

`f1 f2 … fn`

Hierbij is `f_i` het aantal verdiepingen dat aan gebouw `i` wordt toegevoegd.

## Voorbeelden

### Voorbeeldinvoer 1

```text
4
1 2 3 4
```

### Voorbeelduitvoer 1

```text
6
3 2 1 0
```

**Uitleg:** Er zijn 4 gebouwen. De beste oplossing is om alle gebouwen hoogte 4 te geven. Hiervoor moeten er 3 verdiepingen aan gebouw 1, 2 verdiepingen aan gebouw 2 en 1 verdieping aan gebouw 3 worden toegevoegd. Aan gebouw 4 hoeft niets te worden toegevoegd.

### Voorbeeldinvoer 2

```text
1
10000
```

### Voorbeelduitvoer 2

```text
0
0
```

**Uitleg:** Omdat er maar één gebouw is, hebben "alle" gebouwen al dezelfde hoogte. Er hoeven dus geen extra verdiepingen te worden gebouwd.