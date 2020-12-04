//a = (int *) malloc(dlugoscTablicy * sizeof(int));
#include <stdio.h>
#include <stdlib.h>

int podzial(int [] , int , int );
void quick_sort(int [], int, int );
void swap(int, int);

int main() {
    int dlug = 0;
    //scanf("%d", &dlug);
    //int A = (int *) malloc( dlug * sizeof(int));

    int  A[4] = {14, 2, 23, 6};
    size_t n = sizeof(A)/sizeof(A[0]);

    for(int i = 0; i < n; i++) {
        printf("%d\n", A[i]);
    }
    quick_sort(A, 0, n);

    printf("\n");

    for(int i = 0; i < n; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
}
void swap(int x, int y) {

}

int podzial(int  A [], int p, int r) {
    int x = A[r];
    int i = p - 1;

    for(int j = p; j < r; j++) {
        if(A[j] <= x) {
            i++;
            int t = A[i];
            A[i] = A[j];
            A[j] = t;

        }
        int t = A[i + 1];
        A[i] = A[j];
        A[j] = t;
    }
    return i + 1;
}

void quick_sort(int  A [], int p, int r) {
    if (p < r) {
        int q = podzial(A, p, r);
        quick_sort(A, p, q - 1);
        quick_sort(A, q + 1, r);
    }
}