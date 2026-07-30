# Finding Forks
Bron: BAPC Preliminaries 2023, <https://open.kattis.com/problems/findingforks>

Je besteklade bevat veel verschillende soorten vorken. Elke soort heeft zijn eigen doel, en *elke soort heeft zijn eigen vaste plek* in de besteklade. Na een gezellig diner met al je vrienden sloeg het noodlot toe! Je hebt alle gebruikte vorken in de vaatwasser gedaan, maar nu weet je niet meer waar je sommige vorken moet terugleggen, omdat *minstens twee plekken in de besteklade leeg zijn*! En erger nog: je weet niet meer welke soort vork op welke plek hoort!

Wat is het **minimale** aantal vorken dat in de vaatwasser moet hebben gezeten om deze verwarring te veroorzaken?

## Invoer
De invoer bestaat uit:

- Eén regel met een geheel getal `n`, het aantal soorten vorken. `2 <= n <= 10^5`
- Eén regel met `n` gehele getallen: het aantal vorken van elke soort. Elke soort bevat tussen de `1` en `10^9` vorken.

## Uitvoer
Druk het minimale aantal vorken af dat in de vaatwasser moet hebben gezeten.

## Voorbeelden

### Voorbeeldinvoer 1
```
3
4 9 5
```

### Voorbeelduitvoer 1
```
9
```

**Uitleg:** Er zijn 3 soorten vorken: 4× soort 1, 9× soort 2 en 5× soort 3.  
Als je alle vorken van soort 1 en soort 3 in de vaatwasser doet (in totaal **9 vorken**), blijven er twee lege plekken over in de besteklade en weet je niet meer welke plek bij soort 1 hoort en welke bij soort 3. Dit is bovendien de minimale hoeveelheid vorken (dus de beste oplossing).

Andere mogelijkheden (die een slechtere oplossing opleveren) zijn:
- soort 1 en soort 2 in de vaatwasser doen, in totaal 13 vorken;
- soort 2 en soort 3 in de vaatwasser doen, in totaal 14 vorken.

### Voorbeeldinvoer 2
```
10
18 39 5 12 1000000000 54 23 11 123 31415
```

### Voorbeelduitvoer 2
```
16
```

**Uitleg:** De beste oplossing is om alle vorken van soort 3 (5 vorken) en soort 8 (11 vorken) in de vaatwasser te doen (in totaal **16 vorken**). Daardoor blijven er twee lege plekken over in de besteklade.