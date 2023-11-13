# Übung 13.11.2023

## 🥇 Aufgabe 1

Die Firma Babyboom möchte an ihre Kunden aufgrund des Firmenjubiläums Gutscheine ausgeben. Die Höhe des Gutscheines
hängt von folgenden Faktoren ab. Kunden aus Aschaffenburg (1) und Frankfurt (2) erhalten einen Gutschein in Höhe von 100
Euro, wenn sie mindestens 2 Kinder haben. Jedes weitere Kind erhöht den Gutschein um 25 Euro. Kunden aus anderen
Ortschaften bzw. mit weniger als 2 Kindern erhalten lediglich 50 Euro (unabhängig von der Kinderanzahl). Alle weiblichen
Kunden erhalten zusätzlich noch 20 Euro.

### Beispiele:

```shell
Geben Sie Ihren Ort ein (1=Aschaffenburg, 2=Frankfurt, 3=sonstiger Ort): 1
Geben Sie die Anzahl Ihrer Kinder ein: 5
Geben Sie Ihr Geschlecht ein (1 = weiblich, 2 = maennlich): 1

Sie erhalten einen Gutschein im Wert von 195 Euro.
```

```shell
Geben Sie Ihren Ort ein (1=Aschaffenburg, 2=Frankfurt, 3=sonstiger Ort): 3
Geben Sie die Anzahl Ihrer Kinder ein: 4
Geben Sie Ihr Geschlecht ein (1 = weiblich, 2 = maennlich):  2

Sie erhalten einen Gutschein im Wert von 50 Euro. 
```

```shell
Geben Sie Ihren Ort ein (1=Aschaffenburg, 2=Frankfurt, 3=sonstiger Ort): 2
Geben Sie die Anzahl Ihrer Kinder ein: 1
Geben Sie Ihr Geschlecht ein (1 = weiblich, 2 = maennlich):  1

Sie erhalten einen Gutschein im Wert von 70 Euro.
```

### 📜 [Solution](solution.cpp)