# Dragon's Peak (Aangepaste versie)

Deze opgave is een aangepaste versie van NIO Finale 2026 Dag 2, Opgave D - Dragon's Peak, subtaak 1.

Je bent de populaire MMORPG Dragon's Peak (DP) aan het spelen. Je personage heeft een XP-systeem: er zijn `N` levels en je personage moet minstens a<sub>i</sub> XP hebben om level `i` te zijn.

Als bijvoorbeeld a<sub>1</sub>=5 en a<sub>2</sub>=10, betekent dit dat je met 5 XP level 1 bereikt en met 10 XP level 2 bereikt. Op dit moment is je personage level 0 met 0 XP en wil je level N bereiken.

Omdat je binnenkort naar de NIO-finale in Baarn moet, heb je geen tijd meer om zelf XP te grinden. Je hebt nog precies twee manieren om vooruitgang te boeken, die allebei geld kosten:

- **Huur een vriend in:** Je betaalt Uil `P` euro om één uur Dragon's Peak voor jou te spelen. Je personage **verdient dan precies 1 XP** tijdens elke zo'n uur.
- **Betaal de winkel:** Je betaalt `Q` euro in de in-game winkel en gaan direct naar de volgende level (je personage krijgt precies genoeg XP om het volgende level te bereiken).

Je mag beide opties een willekeurig aantal keer en in een willekeurige volgorde gebruiken.

Omdat je binnenkort naar de mooie kerk in Baarn moet vertrekken, wil je level N zo goedkoop mogelijk bereiken. Bepaal het minimale bedrag dat je moet uitgeven.

## Invoer

- Eén regel met `N P Q` die zijn door spaties gescheiden

Hierbij is `N` het aantal levels (waarbij level `N` het hoogste level is dat je wilt bereiken), `P` de prijs om Uil te vragen voor één uur voor 1 XP, en `Q` de prijs om één level in de winkel te kopen.

- Eén regel met `N` door spaties gescheiden gehele getallen:
a<sub>1</sub> a<sub>2</sub> ... a<sub>N</sub>

Dit zijn de benodigde XP om elk level te bereiken. Het is gegarandeerd dat deze waarden strikt toenemen (dus a<sub>1</sub> < a<sub>2</sub> < ... < a<sub>N</sub>).

## Uitvoer

Eén getal: het minimale aantal euro's dat je moet uitgeven om level `N` te bereiken.

## Voorbeelden

### Voorbeeldinvoer 1

```
3 1 3
2 4 6
```

### Voorbeelduitvoer 1

```
6
```

**Uitleg voorbeeld 1:**

Er zijn 3 levels. Je kunt Uil 1 euro betalen om 1 XP te verdienen, of je betaalt 3 euro in de winkel om één level omhoog te gaan.

Je begint met 0 XP.

- Naar level 1 (2 XP): je betaalt Uil 2 × 1 euro, of je betaalt 3 euro in de winkel => Uil is goedkoper (2 euro).
- Van level 1 (2 XP) naar level 2 (4 XP): je betaalt Uil 2 × 1 euro, of je betaalt 3 euro in de winkel => Uil is goedkoper (2 euro).
- Van level 2 (4 XP) naar level 3 (6 XP): je betaalt Uil 2 × 1 euro, of je betaalt 3 euro in de winkel => Uil is goedkoper (2 euro).

Totale minimale kosten = 2 + 2 + 2 = 6 euro.

### Voorbeeldinvoer 2

```
3 2 5
1 10 12
```

### Voorbeelduitvoer 2

```
11
```

**Uitleg voorbeeld 2:**

Er zijn 3 levels. Je kunt Uil 2 euro betalen om 1 XP te verdienen, of je betaalt 5 euro in de winkel om één level omhoog te gaan.

Je begint met 0 XP.

- Naar level 1 (1 XP): je betaalt Uil 1 × 2 euro, of je betaalt 5 euro in de winkel => Uil is goedkoper (2 euro).
- Van level 1 (1 XP) naar level 2 (10 XP): je betaalt Uil 9 × 2 euro, of je betaalt 5 euro in de winkel => de winkel is goedkoper (5 euro).
- Van level 2 (10 XP) naar level 3 (12 XP): je betaalt Uil 2 × 2 euro, of je betaalt 5 euro in de winkel => Uil is goedkoper (4 euro).

Totale minimale kosten = 2 + 5 + 4 = 11 euro.