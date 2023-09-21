#include <stdio.h>

int main(){
	int a;
	float b;
	char c;
	
	printf("nhap so nguyen: ");
	scanf("%d" , &a);
	
	printf("\nnhap so thuc: ");
	scanf("%f" , &b);
	
	printf("\nnhap ky tu: ");
	fflush(stdin);
	scanf("%c" , &c);
	
	printf("so nguyen vua nhap la: %d" , a);
	printf("\nso thuc vua nhap la: %.2f" , b);
	printf("\nKy tu vua nhap la: %c" , c);
	return 0;
}
