#include <stdio.h>

int main() {
	int n;
	int i; 
    for (n = 1; n <= 9; n++) {
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("\n"); 
    }

    return 0;
}

