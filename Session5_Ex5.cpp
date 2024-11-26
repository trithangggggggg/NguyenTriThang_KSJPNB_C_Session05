#include <stdio.h>

int main() {
    printf("bang cuu chong tu 1 den 9:\n");

    for (int so = 1; so <= 9; so = so + 1) {
        printf("\nBang cuu chuong so %d:\n", so);
        for (int i = 1; i <= 10; i = i + 1) {
            printf("%d x %d = %d\n", so, i, so * i);
        }
    }

    return 0;
}
