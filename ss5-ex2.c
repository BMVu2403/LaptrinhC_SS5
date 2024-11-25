#include <stdio.h>

int main() {
    int target = 24; 
    int userinput;

    do {
        printf("Nhap mot so: ");
        scanf("%d", &userinput);
    } while (userinput != target);

    printf("Ban tra loi dung roi.\n");
    return 0;
}

