#include <stdio.h>
#include <stdlib.h>
//Dana jest macierz o m kolumnach i n wierszach. Wypisz wszystkie nieparzyste elementy tej macierzy oraz podaj ich współrzędne (x,y).
//
//Wejście
//
// W pierwszej linii wejścia znajduje się jedna liczba całkowita d (1 <= d <= 100), która oznacza liczbę zestawów danych.
//Każdy zestaw składa się z kilku linii. W pierwszej z nich znajdują się dwie liczby naturalne n i m (1 <= n,m <= 500),
// które oznaczają odpowiednio liczbę wierszy i liczbę kolumn macierzy. W kolejnych n liniach znajduje się po m liczb całkowitych z przedziału od -1000 do 1000,
// które oznaczają kolejne elementy macierzy.
//
//Wyjście
//
// Na wyjściu należy dla każdego zestawu danych wypisać nieparzyste elementy macierzy (w kolejności, w jakiej pojawiają się na wejściu) w formacie k (x,y),
// gdzie k jest wartością elementu, a x i y współrzędnymi tego elementu w macierzy.
//UWAGA! We współrzędnych (x,y) x jest numerem kolumny, a y numerem wiersza.
//
//Przykład
//
//        Wejście:
//2
//2 3
//1 2 3
//4 5 6
//3 2
//-1 9
//3 -1
//8 2
//
//Wyjście:
//1 (1,1)
//3 (3,1)
//5 (2,2)
//-1 (1,1)
//9 (2,1)
//3 (1,2)
//-1 (2,2)


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