# Stenen

Er liggen rode, blauwe en groene stenen in een rij op tafel. Je wilt stenen weghalen zodat er geen twee stenen van dezelfde kleur direct naast elkaar liggen.

Wanneer je een steen weghaalt, blijven de overige stenen in dezelfde volgorde liggen. Bijvoorbeeld: als steen 1 naast steen 2 ligt en steen 2 naast steen 3 ligt, dan liggen steen 1 en steen 3 na het verwijderen van steen 2 direct naast elkaar.

Wat is het minimale aantal stenen dat je moet weghalen?

**Bron:** Codeforces Round 163 Problem A, https://codeforces.com/problemset/problem/266/A

## Invoer

- Eén regel met `n`, het aantal stenen.
- Eén regel met `n` tekens, die elk `R`, `B` of `G` zijn, en de kleur van de stenen beschrijven.

## Uitvoer

Eén regel met één geheel getal: het minimale aantal stenen dat je moet verwijderen.

## Voorbeelden

### Voorbeeldinvoer 1

```text
3
RRG
```

### Voorbeelduitvoer 1

```text
1
```

**Uitleg:** Er liggen drie stenen op tafel: rood, rood, groen. Door de eerste of de tweede rode steen te verwijderen, blijft de rij **rood, groen** over. Dan liggen er geen twee stenen van dezelfde kleur naast elkaar.

### Voorbeeldinvoer 2

```text
5
RRRBG
```

### Voorbeelduitvoer 2

```text
2
```

**Uitleg:** Er liggen vijf stenen op tafel: rood, rood, rood, blauw, groen. Je kunt een geldige rij maken door steen 2 en 3 te verwijderen. Het is ook mogelijk om steen 1 en 2, of steen 1 en 3, te verwijderen. In alle gevallen is het minimale aantal te verwijderen stenen **2**.