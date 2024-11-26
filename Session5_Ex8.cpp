#include <stdio.h>

int main() {
    int so1;
	int so2;
	int ucln;
	int bcnn; 

    printf("Moi nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Moi nhap so thu hai: ");
    scanf("%d", &so2);

    if (so1 > 0 && so2 > 0) {
        int a = so1;
		int b = so2;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        ucln = a;
        bcnn = ( so1 * so2 ) / ucln; 
        printf("Boi chung nho nhat cua %d va %d la: %d\n", so1, so2, bcnn);
    } else {
        printf("Vui long nhap 2 so nguyen duong lon hon 0 \n");
    }

    return 0;
}
