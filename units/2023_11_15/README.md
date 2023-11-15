# Übung 14.11.2023

## 🥇 Aufgabe 1

Wandeln Sie Ihre Aufgabe ["Gutscheine Fa. Babyboom"](/units/2023_11_13/solution.cpp) so um, dass die Eingabe des Ortes
mit den Buchstaben "A" / "F" und "S" erfolgt und die Eingabe des Geschlechtes mit "w" bzw. "m".

### 📜 [Solution](solution_1.cpp)

## 🥈 Aufgabe 2

Schreiben Sie ein Programm, welches die Prüfziffer für den 13-stelligen EAN-Code berechnet.
Der EAN-Code ist folgendermaßen aufgebaut:  
Beispiel:

```shell
40 12700 96310 9
40 - Länderkennziffer (40 = Deutschland)
12700 - Kennzeichen des Herstellers
96310 - Produktkennziffer
9 - Prüfziffer
```

Die Prüfziffer dient zur Kontrolle, ob der eingegebene oder eingelesene EAN-Code korrekt ist. Wurde z.B. eine Zahl
vertauscht oder falsch eingegeben, so stimmt die Prüfziffer nicht mit der Prüfziffer überein, die bei der Fehleingabe
errechnet wurde. An der Scannerkasse ertönt daraufhin ein Warnsignal.  
Die Prüfziffer errechnet sich wie folgt aus den ersten 12 Stellen:  
Summe1: Die Summe aus der 1., 3., 5., 7., 9. und 11. Ziffer  
Summe2: Die Summe aus der 2., 4., 6., 8., 10. und 12. Ziffer. Die Summe2 wird mit 3 multipliziert und zur Summe1
addiert.  
Die Prüfziffer ergibt sich aus der Differenz dieser Summe zur nächsten durch 10 teilbaren Zahl.  
Beispiel:

```
Summe1: 4 + 1 + 7 + 0 + 6 + 1 = 19
Summe2 0 + 2 + 0 + 9 + 3 + 0 = 14 x 3 = 42
Gesamtsumme: 61
Differenz zu 70 = 9
9 ist die Prüfziffer
```

### 📜 [Solution](solution_2.cpp)