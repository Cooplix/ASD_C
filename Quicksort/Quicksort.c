//a = (int *) malloc(dlugoscTablicy * sizeof(int));
#include <stdio.h>
#include <stdlib.h>

int podzial(int *, int , int );
void quick_sort(int *, int, int );

int main() {
    int dlug = 0;
    int * A;
    scanf("%d", &dlug);

    A = (int *) malloc(dlug * sizeof(int));

    for(int i = 0; i < dlug; i++) {
        scanf("%d", &A[i]);
    }

    quick_sort(A, 0, dlug - 1);

    for(int i = 0; i < dlug; i++) {
        printf("%d " , A[i]);
    }
    return 0;
}

int podzial(int * A , int p, int r) {
    int x = A[r];
    int i = p - 1;

    for(int j = p; j < r; j++) {
        if(A[j] <= x) {
            i++;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;

    return i + 1;
}

void quick_sort(int * A, int p, int r) {
    if (p < r) {
        int q = podzial(A, p, r);
        quick_sort(A, p, q - 1);
        quick_sort(A, q + 1, r);
    }
}