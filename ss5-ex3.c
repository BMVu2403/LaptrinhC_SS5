#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    if (n > 0) {
    	int i; 
        for (i = 1; i <= n; i++) {
            sum += i;
        }
        printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
    } else {
        printf("So nhap vao phai la so nguyen duong.\n");
    }

    return 0;
