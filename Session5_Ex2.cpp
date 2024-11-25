#include <stdio.h>

int main() {
    int Num = 42;
    int input ;

    printf("Do biet day la so nao !\n");

    do {
        printf("Nhap so: ");
        scanf("%d", &input);

        if (input != Num) {
            printf("Sai roi nha.\n");
        }

    } while (input != Num);

    printf("%d la dap an chinh xac !!\n", Num);

    return 0;
}
