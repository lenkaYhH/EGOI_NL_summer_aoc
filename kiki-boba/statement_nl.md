# Kiki bouba

"Kiki" en "bouba" vormen een fascinerend voorbeeld van klanksymboliek, waarbij mensen scherpe klanken zoals "kiki" spontaan associëren met hoekige vormen, terwijl zachtere klanken zoals "bouba" juist worden geassocieerd met ronde vormen. Dit wijst op een onderliggend verband tussen klanken en visuele eigenschappen en geeft inzicht in hoe ons brein intuïtief betekenis en associaties creëert.

Fergus heeft al lange tijd interesse in fonetiek en heeft op basis van dit verband een theorie ontwikkeld. Hij gelooft dat alle woorden in vier categorieën kunnen worden ingedeeld. Met andere woorden: elk woord hoort óf bij de figuur links, zoals "kiki", óf bij de figuur rechts, zoals "bouba", óf bij een combinatie van beide, óf bij geen van deze mogelijkheden.

*De figuur links wordt vaak geassocieerd met "kiki". De figuur rechts wordt vaak geassocieerd met "bouba".*

Volgens Fergus behoort een woord tot een categorie op basis van de volgende regels:

- Als het woord meer `b`-letters dan `k`-letters bevat, dan is het een **"bouba"**-woord.
- Als het woord meer `k`-letters dan `b`-letters bevat, dan is het een **"kiki"**-woord.
- Als het woord evenveel `b`-letters als `k`-letters bevat, dan noemt Fergus het een **"boki"**-woord.
- Er is echter één uitzondering: als het woord geen enkele `b` en geen enkele `k` bevat, dan lijkt het woord noch op een "bouba"-woord noch op een "kiki"-woord. In dat geval noemt Fergus het een **"none"**-woord.

Help Fergus door een programma te schrijven dat een gegeven woord in de juiste categorie indeelt.

Bron: <https://open.kattis.com/problems/kikiboba>

## Invoer

De invoer bestaat uit één regel met een tekenreeks die uitsluitend bestaat uit de letters `a` tot en met `z`.

Deze tekenreeks is het woord dat Fergus wil classificeren.

## Uitvoer

Print precies één van de volgende categorieën:

- `bouba`
- `kiki`
- `boki`
- `none`

Er is altijd precies één categorie die van toepassing is.

## Testgroepen

Je oplossing wordt getest op meerdere groepen testgevallen. Om de punten van een groep te behalen, moeten alle testgevallen uit die groep correct worden opgelost.

### Groep 1
Het woord bestaat uit slechts één teken.

### Groep 2
Het woord bevat minstens één `k` of minstens één `b`, maar nooit beide tegelijk.

### Groep 3
Geen aanvullende beperkingen.

## Voorbeelden

### Voorbeeldinvoer 1

```text
bouba
```

### Voorbeelduitvoer 1

```text
bouba
```

**Uitleg:** Het woord bevat 2 keer de letter `b` en geen enkele `k`. Er zijn dus meer `b`'s dan `k`'s, waardoor het antwoord `bouba` is.

### Voorbeeldinvoer 2

```text
kiki
```

### Voorbeelduitvoer 2

```text
kiki
```

### Voorbeeldinvoer 3

```text
kobra
```

### Voorbeelduitvoer 3

```text
boki
```
**Uitleg:** Het woord bevat 1 keer de letter `b` en 1 keer de letter `k`. Er zijn dus evenveel `b`'s als `k`'s, waardoor het antwoord `boki` is.

### Voorbeeldinvoer 4

```text
ljus
```

### Voorbeelduitvoer 4

```text
none
```