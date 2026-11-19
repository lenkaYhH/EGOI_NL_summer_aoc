# Flipperkast

Je bent een programmeur bij het bedrijf dat flipperkasten bouwt. Je hebt de taak gekregen om de software voor de flipperkasten in het informatica wittekerkje te repareren!!

Het lijkt erop dat de functie om de hoogste score te onthouden ontbreekt. Schrijf een programma dat onthoudt wie de hoogste score heeft behaald.

## Invoer
```
n
naam_1 score_1
naam_2 score_2
...
naam_n score_n
```

- één regel met `n`, het aantal mensen
- daarna volgen `n` regels, elk met een string voor iemands naam en een geheel getal voor hun score

Het is gegarandeerd dat alle scores positief zijn en dat niemand dezelfde score heeft.

## Uitvoer
- één regel met de naam van de persoon met de hoogste score

## Voorbeelden

### Voorbeeldinvoer 1
```
2
Uil 10
Giraffe 11
```

### Voorbeelduitvoer 1
```
Giraffe
```

### Voorbeeldinvoer 2
```
1
Lenka 100
```

### Voorbeelduitvoer 2
```
Lenka
```