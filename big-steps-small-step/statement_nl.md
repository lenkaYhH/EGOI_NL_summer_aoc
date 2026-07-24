# Grote stappen, kleine stap

Je bent de held in een computerspel en moet onschuldige burgers redden van een monster. Je begint op coördinaat **(0, 0)** en het monster bevindt zich op **(x, y)**. Je mag alleen de volgende stappen zetten:

## 1. Grote stap
- Je beweegt **2 vakjes naar rechts** of **2 vakjes omhoog**.
- Wiskundig: sta je op positie **(a, b)**, dan ga je naar **(a+2, b)** of **(a, b+2)**.
- Je mag deze stap **zo vaak gebruiken als je wilt**.

## 2. Kleine stap
- Je beweegt **1 vakje naar rechts** of **1 vakje omhoog**.
- Wiskundig: sta je op positie **(a, b)**, dan ga je naar **(a+1, b)** of **(a, b+1)**.
- Je mag deze stap **hoogstens één keer** gebruiken.

Kun je het monster bereiken?

## Invoer
```text
x y
```

Eén regel met twee gehele getallen: de **x-** en **y-coördinaat** van het monster.

Het is gegarandeerd dat:

- \(1 \le x, y \le 10^6\)

## Uitvoer
Druk één regel af met `Ja` of `Nee`.

*Let goed op de hoofdletters en de spelling!*

## Voorbeeld 1

### Invoer
```text
10 10
```

### Uitvoer
```text
Ja
```

### Uitleg
Je kunt 5 grote stappen omhoog en 5 grote stappen naar rechts zetten om **(10, 10)** te bereiken. Je gebruikt **geen** kleine stappen, en dat is toegestaan omdat je er hoogstens één mag gebruiken.

## Voorbeeld 2

### Invoer
```text
3 3
```

### Uitvoer
```text
Nee
```

### Uitleg
Je kunt één grote stap omhoog en één grote stap naar rechts zetten en zo **(2, 2)** bereiken. Daarna heb je nog één kleine stap omhoog én één kleine stap naar rechts nodig om **(3, 3)** te bereiken. Dat zijn in totaal **2 kleine stappen**, terwijl er maximaal **1** is toegestaan.