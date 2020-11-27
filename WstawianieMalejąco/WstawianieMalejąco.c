//a = (int *) malloc(dlugoscTablicy * sizeof(int));
#include <stdio.h>
#include <stdlib.h>
int * sort(int *, int);

int main() {
    int dlugoscTablicy = 0;
    int *tablica;

    scanf("%d", &dlugoscTablicy);
    tablica = (int *) malloc(dlugoscTablicy * sizeof(int));



    for(int i = 0; i <= dlugoscTablicy - 1; i++) {
        scanf("%d", &tablica[i]);
    }
    tablica = sort(tablica, dlugoscTablicy);

    for (int i = 0; i < dlugoscTablicy; i++) {
        printf("%d ", tablica[i]);
    }

    return 0;
}

int * sort(int *tablic, int length) {
    int pom;
    int j;
    for (int i = 1; i < length; i++) {
        pom = tablic[i];
        j = i - 1;

        while (j >= 0  && tablic[j] < pom) {
            tablic[j + 1] = tablic[j];
            --j;
        }
        tablic[j+1] = pom;
    }

    return tablic;
}
