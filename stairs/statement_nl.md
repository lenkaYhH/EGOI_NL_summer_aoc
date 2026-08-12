# Trappen

Uil wandelt een heuvel op via een voetpad met trappen. Er zijn `n` treden in het voetpad en elke trede heeft zijn eigen hoogte (trede nummer `i` heeft hoogte `h_i`). Uil merkt iets interessants op: de trappen zouden omhoog moeten gaan, maar soms is een trede strikt lager dan de trede ervoor! Uil noemt deze lagere treden "onlogisch", omdat je daarmee eigenlijk weer een stukje naar beneden gaat.

Gegeven de hoogtes van de treden, bepaal hoeveel onlogische treden er zijn.

## Invoer

```text
n
h1 h2 ... hn
```

* Eén regel met een geheel getal `n`, het aantal treden. `1 <= n <= 10^5`
* Eén regel met `n` gehele getallen, de hoogte van elke trede in volgorde. `1 <= hi <= 10^9`

## Uitvoer

Eén regel met één getal: het aantal onlogische treden.

## Voorbeeld

### Voorbeeldinvoer 1

```text
5
4 1 1 3 2
```

### Voorbeelduitvoer 1

```text
2
```

**Uitleg:**

* Van tredehoogte 4 naar tredehoogte 1 is onlogisch.
* Van tredehoogte 1 naar 1 is goed.
* Van tredehoogte 1 naar 3 is goed.
* Van tredehoogte 3 naar tredehoogte 2 is onlogisch.

Er zijn in totaal 2 onlogische treden.
