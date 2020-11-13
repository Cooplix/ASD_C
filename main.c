#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    int zestaw;
    int dlugoscCigu;
    int findX;

    scanf("%d", &zestaw);
    scanf("%d", &dlugoscCigu);

    while (zestaw--) {
        int position = 0;
        a = (int *) malloc(dlugoscCigu * sizeof(int));
        for (int i = 0; i < dlugoscCigu; i++) {
            scanf("%d", &a[i]);
        }

        scanf("%d", &findX);

        for (int i = 0; i < dlugoscCigu; i++) {
            if(a[i] == findX) {
                position = i + 1;
                break;
            }
        }
        (position == 0) ? printf("%s\n", "BRAK") : printf("%d\n", position);
    }
    return 0;

}