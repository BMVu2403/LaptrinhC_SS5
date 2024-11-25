#include <stdio.h>

int main() {
    int num1, num2;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Vui long nhap cac so nguyen duong.\n");
        return ;
    }

    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int  lcm = (num1 * num2) / a;

    printf("Boi chung nho nhat cua %d va %d la: %d\n", num1, num2, lcm);

    return 0;
}

