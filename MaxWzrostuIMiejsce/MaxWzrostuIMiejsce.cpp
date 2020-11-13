#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    int liczba, maxWzrost, maxMejsce = 0;

    scanf("%d", &liczba);

    a = (int*)malloc(liczba * sizeof(int));

    for(int i = 0; i < liczba; i++) {
        scanf("%d", &a[i]);
    }

    maxWzrost = a[0];

    for(int i = 0; i < liczba; i++) {

        if(maxWzrost < a[i]) {
            maxWzrost = a[i];
            maxMejsce = i;
        }
    }

    printf("%d %d", maxWzrost, maxMejsce + 1);

    return 0;
}