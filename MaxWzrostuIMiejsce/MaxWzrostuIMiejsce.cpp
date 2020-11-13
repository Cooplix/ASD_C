#include <stdio.h>
#include <stdlib.h>

int ___main() {
    int *a;
    int liczba, maxWzrost, maxMejsce;

    scanf("%d", &liczba);

    a = (int*)malloc(liczba * sizeof(int));

    for(int i = 0; i < liczba; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < liczba; i++) {
        maxWzrost = a[0];
        if(maxWzrost < a[i]) {
            maxWzrost = a[i];
            maxMejsce = i;
        }
    }

    printf("%d %d", maxWzrost, maxMejsce);

    return 0;
}