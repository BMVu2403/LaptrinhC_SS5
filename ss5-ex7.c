#include <stdio.h>

int main() {
    int num1, num2;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Nhap cac so nguyen duong.\n");
        return ;
    }

    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }


    printf("Uoc chung lon nhat la: %d\n", num1);

    return 0;
}

