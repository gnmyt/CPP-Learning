# Übung 27.10.2023

## 🥇 Aufgabe 6

Die Mitarbeiter der X-AG erhalten in diesem Jahr eine Prämie in Abhängigkeit ihres Vorjahreseinkommens und der Dauer
ihrer Betriebszugehörigkeit.

| Betriebszugehörigkeit | Prämiensatz |
|-----------------------|-------------|
| 0 bis unter 2 Jahren  | 5 %         |
| 2 bis unter 5 Jahren  | 10 %        |
| 5 bis unter 15 Jahren | 15 %        |
| 15 und mehr Jahre     | 20 %        |

Erstellen Sie ein Programm, das nach Eingabe des Vorjahreseinkommens und der Betriebszugehörigkeit die jeweilige Prämie
ermittelt. Erstellen Sie zunächst ein Struktogramm!

Eingabedaten: Vorjahreseinkommen, Betriebszugehörigkeit  
Ausgabedaten: Prämie in %, Prämie in Euro

Beispiel:

```shell
Vorjahreseinkommen:  53500
Betriebszugehoerigkeit:  8

Sie erhalten 15.00 % Praemie.
Die Praemie betraegt 8025.00 Euro.
```

### 📜 [Solution](solution_6.cpp)

## 🥈 Aufgabe 7

Schreiben Sie ein Programm, welches nach Eingabe einer Jahreszahl ausgibt, ob es sich bei diesem Jahr um ein Schaltjahr
handelt.
Ein Jahr ist kein Schaltjahr, wenn die Jahreszahl nicht durch 4 teilbar ist.
Ein Jahr ist ein Schaltjahr, wenn die Jahreszahl durch 4, nicht aber durch 100 teilbar ist.
Ein Jahr ist ebenfalls ein Schaltjahr, wenn die Jahreszahl durch 4, durch 100 und durch 400 teilbar ist.

Erstellen Sie zunächst ein Struktogramm!

Beispiel:

```shell
Geben Sie eine Jahreszahl ein: 2000

Das Jahr ist ein Schaltjahr!
```

Beispiel:

```shell
Geben Sie eine Jahreszahl ein: 1900

Das Jahr ist kein Schaltjahr!
```

### 📜 [Solution](solution_7.cpp)

## Aufgabe 8

Schreiben Sie ein Programm, mit dem man den Bruttoarbeitslohn für einen Mitarbeiter berechnen kann.
Für die Berechnung des Bruttolohnes bei Überstunden gilt folgende Regelung:
Solange die Überstunden bis zu 10 % der monatlichen Sollstunden betragen, wird dem Mitarbeiter für jede Überstunde ein
Überstundenzuschlag von 25 % seines Stundenlohnes zusätzlich vergütet.
Übersteigen die Überstunden die 10 % Grenze, so soll dem Mitarbeiter für jede Überstunde ein Zuschlag von 30 % gezahlt
werden.

Erstellen Sie zunächst ein Struktogramm!

Eingabedaten: Sollstunden, Iststunden, Stundenlohn  
Ausgabedaten: Bruttolohn

Beispiel:

```shell
Geben Sie die Monats-Sollstunden ein:  156.5

Geben Sie die Monats-Iststunden ein:  162

Geben Sie den Stundenlohn ein:  18.5

Der Bruttolohn betraegt:  3022.44 Euro.
```

### 📜 [Solution](solution_8.cpp)