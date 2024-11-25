#include <stdio.h>

int main() {
    int so ;
    int tong = 0;

    printf("Moi nhap mot so nguyen duong : ");
    scanf("%d", &so);

    if (so > 0) {
        for (int i = 1; i <= so ; i = i + 1 ) {
            tong = tong + i;
        }
        printf("Tong cac so tu 1 toi %d là: %d\n", so , tong);
    } else {
        printf("Vui long nhap so nguyen duong \n");
    }

    return 0;
}
