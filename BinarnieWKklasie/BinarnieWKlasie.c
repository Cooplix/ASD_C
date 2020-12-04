//a = (int *) malloc(dlugoscTablicy * sizeof(int));
#include <stdio.h>
#include <stdlib.h>
int szukaj(int *, int, int, int);

int main() {
    int uczn = 0;
    int * lista;
    int zapytania = 0;
    scanf("%d", &uczn);
    lista = (int *) malloc(uczn * sizeof(int));

    for(int i = 0; i <= uczn - 1; i++) {
        scanf("%d", &lista[i]);
    }

    scanf("%d", &zapytania);

    int * szukany = (int *) malloc(zapytania * sizeof(int));

    for(int i = 0; i <= zapytania - 1; i++) {
        scanf("%d", &szukany[i]);
    }

    int pos;
    for (int i = 0; i < zapytania ; i++) {
        pos = szukaj(lista, 0, uczn - 1, szukany[i]);
        if(pos == -1) {
            printf("%s\n","NIEOBECNY");
        } else {
            printf("%d\n", pos);
        }
    }

    return 0;
}

int szukaj(int * tablica, int l, int p, int szukane) {
    if(l > p)
        return -1;

    int sr = (l + p) / 2;

    if(tablica[sr] == szukane)
        return sr + 1;

    if(tablica[sr] < szukane)
        return szukaj(tablica, sr + 1, p, szukane);
    else
        return szukaj(tablica, l, sr - 1, szukane);
}