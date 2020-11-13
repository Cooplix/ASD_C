#include <stdio.h>
#include <stdlib.h>

//Jaś stał przed lustrem.
// Nagle za jego plecami pojawiła się piękna dziewczyna i napisała na ścianie swój numer telefonu.
// Zanim jednak Jaś zdążył się odwrócić, numer został zmazany.
//Na szczęście Jaś ma fotograficzną pamięć i doskonale potrafi odtworzyć obraz, który ujrzał.
// Wie więc, jakie cyfry po kolei widział.
// Teraz musi jedynie odtworzyć numer, pamiętając, że w lustrze widzi się odwrotnie stronę prawą i lewą.
// Czyli, jednym słowem, aby poznać numer dziewczyny, musi od tyłu odczytać cyfry, które zapamiętał.
// Pomóż mu w tym, pisząc program, który zrobi to za niego.

//Wejście
// Wejście składa się z jednej liczby naturalnej z przedziału od 1 do 2 000 000 000.
//Wyjście
// Na wyjściu należy wypisać liczbę podaną na wejściu, odczytaną od tyłu.
//Przykład 1
//Wejście:
//45
//Wyjście:
//54
//Przykład 2
//Wejście:
//10025
//Wyjście:
//52001

int __main() {
    int number;
    scanf("%d", &number);
    int numberRev;

    while (number) {
        numberRev = numberRev * 10 +  number % 10;
        number = number / 10;
        printf("number: %d, numberRev: %d\n", number, numberRev);
    }

    printf("%d", numberRev);
    return 0;
}