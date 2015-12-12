# QtZombiegiene
##Index:
1. Workflow
2. Konwencja nazewnicza
3. Metodyka pisania funkcji i klas
4. Include'owanie
5. Syntax
6. Git

###1.  Workflow
Mamy zrobiony spreadsheet, w którym wszyscy wpisujemy, co robimy. Jeśli dodajemy guzik, to piszemy jego nazwę; jeśli jakąś funkcję, to podajemy jej nazwę, itp.. W ten sposob, będzie mozna śledzic, co było kiedy dodane i porównac z tym, co jest w kodzie.

###2.  Konwencja nazewnicza
  -  metody, funkcje itp. itd. zaczynami z małej litery i każde kolejne słowo z wielkiej, np.
  `QVector<int> sortVector(QVector<int> v);`
  -  metody od booli nazywami ich stanami, np. isEmpty, isGay, isFlipped, spamFilterOn
  -  do zmiennych ta sama konwencja, co do metod, tj. np. int vectorCounter;
	-  zmienne w loopach moga mieć krótkie nazwy, np. i, j
  -  jeśli korzystacie z "auto" to dodajcie w tej samej linijce komentarz
  -  klasy z wielkiej litery
  -  pliki małymi literami; nazwy plików klas takie same, jak nazwy klas, które zawierają

###3.  Metodyka pisania funkcji i klas
  -  Każda funkcja, którą zaczynacie pisać skomentujecie na poczatku, żeby było wiadomo, co robi i co zwraca (jeśli jest taka potrzeba), np.

    ```c++
	QVector<int> sortVector(QVector<int> v) {
		//3jckd
		//wcale nie sortuje, ale jest komentarz
		return v;
	}
	```

	Podajcie w pierwszej linijce komentarza swój nickname z githuba.
  -  Klasy też skometujcie, żeby było wiadomo, po co są.
  -  Piszcie funkcje, ktore są bez side effectóww tzn. zamiast pisać funkcję:
	`void shiftLeft();` która shiftuje np. macierz, która jest prywatną zmienną w klasie
	i wywołania jej po prostu `shiftLeft();` lepiej pisać: `Macierz shiftLeft(Macierz m);` i wywołania `prywatnaMacierz = shiftLeft(prywatnaMacierz);` dzięki temu można wykorzystać tę metodę w kilku miejscach i łatwiej śledzić zmiany danej zmiennej, np. debugując.
  -  Przekazujcie przez const ref, jeśli nie zmieniacie i przez wartość, jesli zmieniacie (poprzedni punkt); nie przekazujcie przez referencję/pointer, bo innym osobom później ciężko znaleźć zmiany, rozczytać się w kodzie; wydajność jest praktycznie ta sama.

###4 Include'owanie
Róbcie include'y tylko na to, co potrzebujecie. Jak korzystacie z QVector, QFile, QTextStream, to zróbcie:
```c++
#include <QVector>
#include <QFile>
#include <QTextStream>
```
Zamiast całego QtCore, czy jeszcze więcej.

###5.  Syntax
Ogółem, spacje przed i po znakach, nawiasy w tej samej linii, bez spacji przed nawiasami if else z klamrami

```c++
for(int i = 0; i < 10; i += 1) {
    if(m[i].isEmpty) {
		return 1;
	} else if(m[i].size < 100) {
    	appendToFile(m[i]);
	} else return 13;
}
```

###6.  Git
  1. Nowe repozytorium lokalne: git clone https://github.com/qbaSz/QtZombiegiene
    * cd QtZombiegiene
    * git checkout -b mojbranch //robię nowego brancha o nazwie mojbranch i się do niego przenoszę
    * wprowadzam zmiany na moim branchu
    * git checkout master //przenoszę się na swojego głównego brancha
    * git pull //ściągam do mastera to, co jest aktualnie na qbaSz (najbardziej aktualne)
    * **patrzę, co spullowałem i weryfikuję, że moje zmiany niczego nie popsują**
    * git checkout mojbranch
    * git add .
    * git commit -m "treść komentarza, tego co zrobiłem" //wracam na mojego brancha i dodaje wszystkie pliki
    * git branch //sprawdzam na jakim jestem branchu
    * git status //patrze, czy scommitowałem zmiany i czy wszystko weszło
    * git checkout master
    * git rebase mojbranch //wracam na mastera i przenoszę zmiany z mojego brancha
    * **git push origin master**
    * podaję mój username i hasło z gita

  2. Każda kolejna zmiana:
    * wchodzę do folderu QtZombiegiene
    * git pull //na masterze
    * robię brancha, jeśli nie mam
    * git checkout mojbranch
    * git rebase master //jeśli już mam
    * wprowadzam zmiany
    * git checkout master
    * git pull
    * **patrzę, co spullowałem i weryfikuję, że moje zmiany niczego nie popsują**
    * git checkout mojbranch
    * git add .
    * git commit -m "komentarz"
    * git checkout master
    * git rebase mojbranch
    * //jesli wszystko jest ok to: **git push origin master**
    * git branch -D mojbranch //usuwam brancha o nazwie mojbranch

do kontynuacji



