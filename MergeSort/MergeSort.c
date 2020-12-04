//a = (int *) malloc(dlugoscTablicy * sizeof(int));
#include <stdio.h>
#include <stdlib.h>

void scal(int *, int , int, int);
void scal_sort(int *, int, int );

int main() {
    int dlug = 0;
    int * A;
    scanf("%d", &dlug);

    A = (int *) malloc(dlug * sizeof(int));

    for(int i = 0; i < dlug; i++) {
        scanf("%d", &A[i]);
    }

    scal_sort(A, 0, dlug - 1);

    for(int i = 0; i < dlug; i++) {
        printf("%d\n" , A[i]);
    }
    return 0;
}

void scal(int * A , int l, int m, int r) {
    int lSize = m - l + 1;
    int rSize = r - m;

    int * tabL = (int *) malloc(lSize * sizeof(int));
    int * tabR = (int *) malloc(rSize * sizeof(int));

    for(int i = 0; i < lSize; i++) {
        tabL[i] = A[l + i];
    }
    for(int j = 0; j < rSize; j++) {
        tabR[j] = A[m + j + 1];
    }

    int iL = 0;
    int iR = 0;
    int k;

    for(k = l; iL <lSize && iR < rSize; k++) {
        if (tabL[iL] <= tabR[iR]) {
            A[k] = tabL[iL++];
        } else {
            A[k] = tabR[iR++];

        }
    }

    while (iL < lSize) {
        A[k++] = tabL[iL++];
    }
    while (iR < rSize) {
        A[k++] = tabR[iR++];
    }

    free(tabR);
    free(tabL);
}

void scal_sort(int * A, int l, int r) {
    if (r > l) {
        int q = (l + r) / 2;
        scal_sort(A, l, q);
        scal_sort(A, q + 1, r);
        scal(A, l, q, r);
    }
}