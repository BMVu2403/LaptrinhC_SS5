#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("nhap 2 so bat ki :");
	scanf("%d %d", &a, &b);
	printf("    CACULATOR     \n");
	printf("1. Tong 2 so \n");
	printf("2. Hieu 2 so \n");
	printf("3. Tich 2 so \n");
	printf("4. Thuong 2 so \n");		
	printf("5. Thoat \n");
	int x;
	printf("lua chon cua ban la : ");
	scanf("%d", &x);
	switch(x){
		case 1:
			printf("Tong hai so %d va %d la %d", a, b, a+b);
			break;
		case 2:
			printf("Hieu hai so %d va %d la %d", a, b, a-b);
			break;
		case 3:
			printf("Tich hai so %d va %d la %d", a, b, a*b);
			break;
		case 4:
			printf("Thuong hai so %d va %d la %.2f", a, b, a/b);
			break;
		case 5:
			exit(0);
			break;
	}
	return 0;
}
