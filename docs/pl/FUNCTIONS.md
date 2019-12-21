# Funkcje VerLib

Tutaj są wszystkie funkcje w VerLib oraz instrukcje, jak ich użyć!

### Struktura Version

Ta struktura jest źródłem VerLib. Jest zdefiniowana z czterech pól typu liczby całkowitej. Dla łatwiejszego użycia struktury, jest zdefiniowany typ  Version by tworzyć zmienne. Pola w strukturze to: Major, Minor, Release i Build.

## Ustwaianie wersji w bibliotece

### void SetVersionString(char *version)

Ta funkcja bierze argument i rozdziela go w głównej zmiennej VerLib. Dane podane do tej funkcji muszą zawierać wszystkie numery wersji. Napis powinien być zdefiniowany w sposób: `char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };`, który jest zgodny ze wzorem: "Major.Minor.Release.Build\0".

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString();
// Tutaj wersja jest ustawiona w bibliotece
```

### void SetVersionMajor(int value)

Ta funkcja ustawia wartość Major w głównej zmiennej VerLib. To może być każda liczba całkowita, która ma nie więcej niż trzy cyfry.

Przykład:

```c
SetVersionMajor(2); // Ustawia Major na 2
```

### void SetVersionMinor(int value)

Tak jak powyższa, ale ustawia wartość Minor. Liczba całkowita z maksymalnie trzema cyframi.

Przykład:

```c
SetVersionMinor(5); // Ustawia Minor na 5
```

### void SetVersionRelease(int value)

Tak jak powyższa, ale ustawia wartość Release. Liczba całkowita z maksymalnie czterema cyframi.

Przykład:

```c
SetVersionRelease(12); // Ustawia Release na 12
```

### void SetVersionBuild(int value)

Tak jak powyższa, ale ustawia wartość Build. Liczba całkowita z maksymalnie stetką cyfr.

Przykład:

```c
SetVersionBuild(56); // Ustawia Build na 56
```

## Pobieranie numerów wersji z biblioteki

### int GetVersionFull()

Ta funkcja zwraca liczbę całkowitą, reprezentującą aktywne ustawienia wersji w bibliotece, bez jakichkolwiek znaków, np. jeśli wersja jest ustawiona na "1.0.0 Build 10" wyjście będzie równe 10010:

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
printf("%i", GetVersionFull()); // Wyświetla 1001
```

### int GetVersionMajor()

Ta funkcja zwraca wartość Major z głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
int major = GetVersionMajor(); // Zwraca 1
```

### int GetVersionMinor()

Ta funkcja zwraca wartość Minor z głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
int major = GetVersionMinor(); // Zwraca 0
```

### int GetVersionRelease()

Ta funkcja zwraca wartość Release z głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
int major = GetVersionRelease(); // Zwraca 0
```

### int GetVersionBuild()

Ta funkcja zwraca wartość Release z głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
SetVersionString(version);
int major = GetVersionBuild(); // Zwraca 1
```

## Inkrementacja lub dekrementacja numerów wersji

### void IncrementMajor()

Ta funkcja inkrementuje wartość Major w głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
IncrementMajor();
// Tutaj major ma wartość 2
```

### void IncrementMinor()

Ta funkcja inkrementuje wartość Minor w głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
IncrementMinor();
// Tutaj minor ma wartość 1
```

### void IncrementRelease()

Ta funkcja inkrementuje wartość Release w głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
IncrementRelease();
// Tutaj release ma wartość 1
```

### void IncrementBuild()

Ta funkcja inkrementuje wartość Build w głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
IncrementBuild();
// Tutaj build ma wartość 2
```

### void DecrementMajor()

Ta funkcja dekrementuje wartość Major w głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
DecrementMajor();
// Tutaj major ma wartość 0
```

### void DecrementMinor()

Ta funkcja dekrementuje wartość Minor w głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '1', '.', '0', '.', '1', '\0' };
DecrementMinor();
// Tutaj minor ma wartość 0
```

### void DecrementRelease()

Ta funkcja dekrementuje wartość Release w głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '1', '.', '1', '\0' };
DecrementRelease();
// Tutaj release ma wartość 0
```

### void DecrementBuild()

Ta funkcja dekrementuje wartość Build w głównej zmiennej VerLib.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '10', '\0' };
DecrementBuild();
// Tutaj build ma wartość 9
```

## Wypisywanie danych wersji

### void ConsoleLogVersion()

Ta funkcja wypisuje dane wersji VerLib do konsoli. Wzór to "Major.Minor.Release Build"

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
ConsoleLogVersion();
// Konsola wyświetli: "1.0.0 1"
```

### char *LogVersionString()

Ta funkcja zwraca napis, zakończony znakiem NULL, do wywołującego. Wersja z tego napisu jest identyczna jak z funkcji ConsoleLogVersion, ale bez kropek.

Przykład:

```c
// Ustaw wersję VerLib:
char version[] = { '1', '.', '0', '.', '0', '.', '1', '\0' };
char *version = LogVersionString();
// Zmienna będzie miała wskaźnik do wartości: "1001\0"
```

## Dodatkowe funkcje

### bool CompareVersions(Version x, Version y)

Ta funkcja porównuje dwie podane wersje sprawdzając, czy są takie same.

Przykład:

```c
Version version1;
version1.Major = 1;
version1.Minor = 2;
version1.Release = 4;
version1.Build = 122;

Version version2;
version2.Major = 2;
version2.Minor = 0;
version2.Release = 5;
version2.Build = 108;

bool cmpvar = CompareVersions(version1, version2);
// "cmpvar" będzie miała wartość false, ponieważ wersjie nie są takie same
```
