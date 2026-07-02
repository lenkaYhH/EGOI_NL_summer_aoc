# Albert Heijn

Uil is begonnen met werken bij de Albert Heijn, maar de kassamachine is kapot! Help Uil om voor de `t` klanten het totaalbedrag te berekenen, rekening houdend met de huidige kortingen.

## Kortingsregels

a. Als het totaalbedrag **vóór enige korting** groter dan of gelijk aan **50 euro** is, krijgt de klant **5% korting** op het totaalbedrag.

b. Als het totaalbedrag **vóór enige korting** groter dan of gelijk aan **100 euro** is, krijgt de klant **10% korting** op het totaalbedrag. (Als deze regel van toepassing is, geldt regel **a** niet.)

c. Als het totaalbedrag **vóór enige korting** deelbaar is door **7**, krijgt de klant **7 euro korting**.

d. Als het totaalbedrag **vóór enige korting** deelbaar is door **11**, krijgt de klant **1 euro korting**.

e. Als het totaalbedrag **vóór enige korting** zowel deelbaar is door **7** als door **11**, dan gelden **beide** kortingen uit regels **c** en **d**.

f. Als het totaalbedrag **vóór enige korting** minstens **50 euro** of **100 euro** is **én** deelbaar is door **7** en/of **11**, pas dan **eerst** de procentuele korting (regel **a** of **b**) toe en **daarna** de vaste kortingen (regel **c** en/of **d**).

# Invoer

De eerste regel bevat een geheel getal `t`: het aantal klanten.

Daarna volgen `t` regels.

Elke regel begint met een geheel getal `n`, het aantal artikelen dat de klant koopt. Vervolgens staan op dezelfde regel de prijzen van de `n` artikelen, gescheiden door spaties.

```
t
n_1 prijs_1 prijs_2 prijs_3 ... prijs_n1
...
n_t prijs_1 prijs_2 ... prijs_nt
```

# Uitvoer

Print voor iedere klant één regel met het bedrag dat de klant uiteindelijk moet betalen (na toepassing van alle kortingen).

# Voorbeeld

## Voorbeeldinvoer

```
3
4 10 10 10 10
5 10 10 10 10 10
1 77
```

## Voorbeelduitvoer

```
40
47.5
65.15
```

## Uitleg

Er zijn in totaal 3 klanten.

**Klant 1**

Het oorspronkelijke totaalbedrag is:

10 + 10 + 10 + 10 = 40

Er is geen enkele kortingsregel van toepassing.

**Klant 2**

Het oorspronkelijke totaalbedrag is:

10 + 10 + 10 + 10 + 10 = 50

Regel **a** is van toepassing, dus het eindbedrag is:

50 × 0,95 = 47,5 euro.

**Klant 3**

Het oorspronkelijke totaalbedrag is 77 euro.

Regels **a**, **c** en **d** zijn van toepassing.

Eerst wordt de korting uit regel **a** toegepast:

77 × 0,95 = 73,15 euro.

Vervolgens worden de vaste kortingen toegepast:

73,15 − 7 − 1 = 65,15 euro.