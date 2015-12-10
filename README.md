# QtZombiegiene
Index:
1. Workflow
2. Konwencja nazewnicza
3. Metodyka pisania funkcji i klas
4. Syntax
5. Git

1.	Workflow
		Mamy zrobiony spreadsheet, w ktorym wszyscy wpisujemy, co robimy. Jesli dodajemy guzik, to piszemy jego nazwe, jesli jakas funkcje, to podajemy jej pelna nazwe. W ten sposob, bedzie mozna sledzic, co bylo kiedy dodane i porownac, z tym, co jest w kodzie.

2.	Konwencja nazewnicza
		a) metody, funkcje itp. itd. zaczynami z malej litery i kazde kolejne slowo z wielkiej, np.
		QVector<int> sortVector(QVector<int> v);
		b) metody od booli nazywami ich stanami, np. isEmpty, isGay, isFlipped, spamFilterOn
		c) zmienne ta sama konwencja, co metody, tj. np. int vectorCounter;
		zmienne w loopach moga miec krotkie nazwy, np. i, j; jesli korzystacie z "auto" to dodajcie komentarz w tej samej linijce
		d) klasy z wielkiej litery
		e) pliki malymi literami; nazwy plikow klas takie same, jak nazwy klas, ktore zawieraja

3.	Metodyka pisania funkcji i klas
		a) Kazda funkcje, ktora zaczynacie pisac skomentujecie na poczatku, zeby bylo wiadomo, co robi i co zwraca, np.
		QVector<int> sortVector(QVector<int> v) {
			//3jckd
			//wcale nie sortuje, ale jest komentarz
			return v;
		}
		Podajcie w pierwszej linijce komentarza swoj nickname z githuba.
		b) Klasy tez skometujcie, zeby bylo wiadomo, po co sa.
		c) Piszcie funkcje, ktore sa bez side effectow tzn. zamiast pisac funkcje:
		void shiftLeft(); ktora shiftuje np. macierz, ktora jest prywatna zmienna w klasie
		i wywolania jej po prostu shiftLeft();
		lepiej pisac:
		Macierz shiftLeft(Macierz m);
		i wywolania prywatnaMacierz = shiftLeft(prywatnaMacierz);
		dzieki temu mozna wykorzystac te metode w kilku miejscach i latwiej sledzic zmiany danej zmiennej.
		d) Przekazujcie przez const ref, jesli nie zmieniacie i przez wartosc, jesli zmieniacie (punkt c); nie przekazujcie przez referencje/pointer, bo innym osobom pozniej ciezko znalezc zmiany, rozczytac sie w kodzie; wydajnosc jest praktycznie ta sama.

4.	Syntax
		Ogolem, spacje przed i po znakach, nawiasy w tej samej linii, bez spacji przed nawiasami if else z klamrami
		for(int i = 0; i < 10; i += 1) {
			if(m[i].isEmpty) {
				return 1;
			} else {
				appendToFile(m[i]);
			}
		}

5.	Git
		1) Nowe repozytorium lokalne: git clone https://github.com/qbaSz/QtZombiegiene
		-> cd QtZombiegiene
		-> git checkout -b mojbranch //robie nowego brancha o nazwie mojbranch i sie do niego przenosze
		-> wprowadzam zmiany na moim branchu
		-> git checkout master //przenosze sie na swojego glownego brancha
		-> git pull //sciagam do mastera to, co jest aktualnie na qbaSz (najbardziej aktualne)
		-> patrze, co spullowalem i weryfikuje, ze moje zmiany nic nie popsuja
		-> git checkout mojbranch
		-> git add .
		-> git commit -m "tresc komentarza, tego co zrobilem" //wracam na mojego brancha i dodaje wszystkie pliki
		-> git branch //sprawdzam na jakim jestem branchu
		-> git status //patrze, czy scommitowalem zmiany i czy wszystko weszlo
		-> git checkout master
		-> git rebase mojbranch //wracam na mastera i przenosze zmiany z mojego brancha
		-> git push origin master
		-> podaje moj username i haslo z gita

		2) Kazda kolejna zmiana:
		-> wchodze do folderu QtZombiegiene
		-> git pull //na masterze
		-> robie brancha, jesli nie mam
		-> git checkout mojbranch
		-> git rebase master //jesli juz mam
		-> wprowadzam zmiany...

		-> git branch -D mojbranch //usuwam brancha o nazwie mojbranch

do kontynuacji


