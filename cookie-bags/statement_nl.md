# Koekzakken

Er liggen veel rode en blauwe koekzakken op tafel. Elke rode koekzak bevat **3 koekjes** en elke blauwe koekzak bevat **1 koekje**.

Uil en Giraf willen de koekjes eerlijk verdelen. Ze kiezen om de beurt een koekzak voor zichzelf. De koekjes in de gekozen zak zijn van degene die de zak kiest. Ze gaan door totdat er geen koekzakken meer over zijn.

**Uil kiest altijd als eerste.**

Beide spelers proberen bij elke beurt zoveel mogelijk koekjes te krijgen en kiezen daarom altijd de zak met de meeste koekjes.

Hoeveel koekjes krijgt Uil uiteindelijk?

## Invoer

Eén regel met twee door een spatie gescheiden gehele getallen:

```text
r b
```

waarbij:

- `r` het aantal rode koekzakken is, `0 <= r <= 10^6`
- `b` het aantal blauwe koekzakken is, `0 <= b <= 10^6`


## Uitvoer

Print één geheel getal: het aantal koekjes dat Uil krijgt.

## Voorbeeld

### Voorbeeldinvoer 1

```text
2 1
```

### Voorbeelduitvoer 1

```text
4
```

### Uitleg

Er zijn 2 rode koekzakken en 1 blauwe koekzak.

1. Uil kiest een rode koekzak (3 koekjes).
2. Giraf kiest de andere rode koekzak (ook 3 koekjes, omdat die de meeste koekjes bevat).
3. Uil kiest de overgebleven blauwe koekzak (1 koekje).

Uil krijgt in totaal **3 + 1 = 4** koekjes.