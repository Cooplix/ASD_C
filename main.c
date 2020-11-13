#include <stdio.h>
#include <stdlib.h>


int ** dynamic_array_alloc(size_t N, size_t M) {

    int **A = (int **)malloc(N*sizeof(int *));
    for(int i = 0; i < N; i++) {
        A[i] = (int *)malloc(M*sizeof(int));
    }
    return A;
}

void dynamic_array_free(int **A, size_t N)
{
    for(int i = 0; i < N; i++) {
        free(A[i]);
    }
    free(A);
}

int main() {

    int zestaw;
    int wierz, kolumn;

    scanf("%d", &zestaw);


    while(zestaw--) {
        scanf("%d %d", &wierz, &kolumn);

        int **Macierz = dynamic_array_alloc(wierz, kolumn);
        int liczba;

        for (int i = 0; i < wierz; ++i) {
            for (int j = 0; j < kolumn; ++j) {
                scanf("%d", &liczba);
                Macierz[i][j] = liczba;
            }
        }

        for (int i = 0; i < wierz; i++) {
            for (int j = 0; j < kolumn; j++) {
                if (Macierz[i][j] % 2 != 0) {
                    printf("%d (%d,%d) \n", Macierz[i][j], j + 1, i + 1);
                }
            }
        }
        dynamic_array_free(Macierz, wierz);
    }
}