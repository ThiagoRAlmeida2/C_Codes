#include <stdio.h>
#include <stdlib.h>

int swap(int *v1, int *v2) {
    int t = *v1;
    *v1 = *v2;
    *v2 = t;
    return 0;
}

int main(void) {
    int x, y, t, v[7] = {5, 7, 6, 4, 2, 3, 1};

    for (x = 1; x < 7; x++)
        if (v[x] < v[x - 1])
            for (y = x; y != 0; y--)
                if (v[y] < v[y - 1])
                    swap(&v[y], &v[y - 1]);

    for (x = 0; x < 7; x++)
        printf("\n%d", v[x]);
    printf("\n");

    system("pause");
}
