#include <stdio.h>

int main() {
    int so;

    printf("Vui long nhap so 1 - 10: ");
    scanf("%d", &so);

    if (so >= 1 && so <= 10) {
        printf("Bang cuu chuong so %d:\n", so);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", so, i, so * i);
        }
    } else {
        printf("Vui long nhap dung so tu 1 den 10.\n");
    }

    return 0;
}
