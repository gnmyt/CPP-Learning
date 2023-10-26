# Übung 26.10.2023

## 🥇 Aufgabe 1

Schreiben Sie ein Programm zur Ermittlung der Umsatzprovision von Verkäufern. Die Umsatzprovision ergibt sich aufgrund
des erzielten Umsatzes. Verkäufer, die einen Umsatz unter 100.000,00 € erzielen, erhalten als Provision 5 % ihres
Umsatzes. Verkäufer, die 100.000,00 € oder mehr Umsatz erreichen, erhalten 7,5 % des Umsatzes. Erstellen Sie zunächst
ein Struktogramm!

Eingabedaten: Umsatz
Ausgabedaten: Provision in Euro

Beispiel

```shell
Geben Sie den Umsatz ein:  200000

Die Provision betraegt:  15000 Euro.
```

### 📜 [Solution](solution.cpp)

## 🥈 Aufgabe 2

Der Hardware-Großhändler führt für Wiederverkäufer neue Konditionen ein. Er wendet folgende Rabattstaffel an:
Bei einem Bestellwert von weniger als 100,00 € gewährt er 10 % Rabatt, liegt der Bestellwert höher, jedoch nicht über
500,00 €, beträgt der Rabatt 15 %, in allen anderen Fällen liegt der Rabatt bei 20 %. Erstellen Sie zunächst ein
Struktogramm!

Eingabedaten: Anzahl der Mäuse, Preis je Maus
Ausgabedaten: Warenwert, Rabatt in % und Euro, Nettobetrag, Umsatzsteuer, Bruttobetrag

Beispiel:

```shell
Geben Sie die Anzahl der Maeuse ein:  5
Geben Sie den Einzelpreis ein:  10

Warenwert   :  50.00 Euro
Rabatt (10.00 %)  :    5.00 Euro
-----------------------------------------------------------------------------------------
Nettobetrag   :  45.00 Euro
Umsatzsteuer   :    8.55 Euro
------------------------------------------------------------------------------------------
Bruttobetrag   :  53.55 Euro
```

### 📜 [Solution](solution_2.cpp)

## 🥉 Aufgabe 3

Der bereits erwähnte Hardware-Großhändler liefert frei Haus, wenn die Bestellmenge bei mindestens 10 Mäusen liegt, bei
einer geringeren Bestellmenge berechnet er eine Transportpauschale von 10,00 €.
Erstellen Sie zunächst ein Struktogramm! Schreiben Sie ein entsprechendes Programm!

Eingabedaten: Anzahl der Mäuse, Preis je Maus
Ausgabedaten: Nettowarenwert, Transportpauschale, Umsatzsteuer, Bruttobetrag

Beispiel:

```shell
Geben Sie die Anzahl der PC-Maeuse ein: 10

Geben sie den Einzelpreis ein: 10

Nettowarenwert  :  100.00 Euro
+ Transportpauschale  :     0.00 Euro
+ Umsatzsteuer  :   19.00 Euro
-----------------------------------------------------------------
= Bruttobetrag  : 119.00 Euro
```

Beispiel:

```shell
Geben Sie die Anzahl der PC-Maeuse ein: 9

Geben sie den Einzelpreis ein: 5

Nettowarenwert  :    45.00 Euro
+ Transportpauschale  :   10.00 Euro
+ Umsatzsteuer  :   10.45 Euro
-----------------------------------------------------------------
= Bruttobetrag  :   65.45 Euro
```

### 📜 [Solution](solution_3.cpp)

## 🏅 Aufgabe 4

Ein Bauartikelhändler gewährt seinen Kunden beim Kauf von Dachziegeln Mengenrabatt.

| Einkaufsmenge  | Rabatt |
|----------------|--------|
| bis 500 Stück  | 2 %    |
| bis 1000 Stück | 5 %    |
| darüber        | 10 %   |

Kunden mit einer Geschäftsbeziehung von mehr als 10 Jahren und einer Menge von mehr als 1.000 Stück erhalten einen
zusätzlichen Rabatt von 5 %.
Schreiben Sie ein Programm, das nach Eingabe des Preises/Stück, der Menge und der Dauer der Geschäftsbeziehung den
Rabatt ermittelt und diesen ausgibt. Erstellen Sie zunächst ein Struktogramm!

Eingabedaten: Menge, Stückpreis, Dauer der Geschäftsbeziehung
Ausgabedaten: Rabatt in %, Rabatt in Euro

Beispiel:

```shell
Geben Sie die Anzahl ein:  1000
Geben Sie den Stueckpreis ein:  1.2
Geben Sie die Dauer der Geschaeftsbeziehung ein:  10

Sie erhalten 5 % Rabatt.

Der Rabatt betraegt:  60.00 Euro.
```