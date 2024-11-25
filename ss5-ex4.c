#include <stdio.h>

int main() {
    int n;
    int i; 

    printf("Nhap mot so nguyen tu 1 den 10: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("So khong hop le.\n");
        return 1;
    }

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

