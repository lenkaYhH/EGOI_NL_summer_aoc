# Odysseus volgen

Voordat de wereldberoemde filmregisseur Christopher Nolan begon met het filmen van *The Odyssey*, dook hij in de epos van Homerus om inspiratie te krijgen voor zijn film.

Er zijn in totaal `n` plaatsen in deze wereld (genummerd van `0` tot en met `n-1`). Plaats `0` is het beginpunt en plaats `n-1` is het thuis van Odysseus (waar zijn reis eindigt).

Omdat `n` erg groot is, heeft Christopher Nolan moeite om de route die Odysseus naar huis nam te achterhalen. Net toen hij het wilde opgeven, verscheen een van de oude Griekse goden en gaf hem een magische boekrol met `n-1` getallen. Deze getallen geven aan naar welke plaats Odysseus ging nadat hij plaats `i` had verlaten. Jouw taak is om de route die Odysseus volgde te reconstrueren.

Concreet geldt het volgende: gegeven een lijst met getallen `a0 a1 a2 ...`, geeft het eerste getal aan naar welke plaats Odysseus ging nadat hij plaats `0` verliet, het tweede getal waar hij na plaats `1` naartoe ging, enzovoort. De lijst bevat slechts `n-1` getallen, omdat Odysseus vanaf zijn thuis (plaats `n-1`) nergens meer naartoe gaat.

Daarnaast is gegarandeerd dat:

- Odysseus blijft nooit op dezelfde plaats staan (oftewel: `ai` is nooit gelijk aan `i`).
- Odysseus bezoekt nooit twee keer dezelfde plaats (alle getallen in de lijst zijn dus verschillend).
- Odysseus keert nooit terug naar het beginpunt (plaats `0` komt dus niet voor in de lijst).

Let op: Odysseus hoeft niet alle `n` plaatsen bezocht te hebben tijdens zijn reis (zie de voorbeelden voor meer uitleg).

## Invoer

```text
n
a0 a1 a2 ... an-2
```

- Eén regel met een geheel getal `n`, het aantal plaatsen (`2 <= n <= 100000`).
- Eén regel met `n-1` gehele getallen die voor elke plaats (behalve `n-1`) aangeven wat de volgende bestemming is.

## Uitvoer

Print een lijst met spatiegescheiden gehele getallen die de route van Odysseus beschrijven. De lijst moet beginnen met `0` en eindigen met `n-1`.

## Voorbeeld 1

### Invoer

```text
4
1 3 2
```

### Uitvoer

```text
0 1 3
```

### Uitleg

Er zijn 4 plaatsen, waarbij plaats `0` het beginpunt is en plaats `3` het thuis van Odysseus.

- Odysseus start op plaats `0`. Op positie `0` van de lijst staat `1`, dus hij gaat vervolgens naar plaats `1`.
- Op plaats `1` staat op positie `1` van de lijst de waarde `3`, dus hij gaat daarna naar plaats `3`.
- Plaats `3` is zijn thuis, dus de reis eindigt daar.

De volledige route is dus:

`0 → 1 → 3`

Merk op dat plaats `2` nooit bezocht wordt, omdat Odysseus al thuis is aangekomen voordat hij daar terecht zou komen.

## Voorbeeld 2

### Invoer

```text
7
5 2 3 4 6 1
```

### Uitvoer

```text
0 5 1 2 3 4 6
```

### Uitleg

Odysseus start op plaats `0`.

- Vanaf plaats `0` gaat hij naar plaats `5`.
- Vanaf plaats `5` gaat hij naar plaats `1`.
- Vanaf plaats `1` gaat hij naar plaats `2`.
- Vanaf plaats `2` gaat hij naar plaats `3`.
- Vanaf plaats `3` gaat hij naar plaats `4`.
- Vanaf plaats `4` gaat hij naar plaats `6`.
- Plaats `6` is zijn thuis, dus de reis eindigt daar.

De volledige route is:

`0 → 5 → 1 → 2 → 3 → 4 → 6`