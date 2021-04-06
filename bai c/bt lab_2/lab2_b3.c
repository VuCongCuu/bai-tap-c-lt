#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("nhap so num 1=");
	scanf("%d",&a);
	
	printf("nhap so num 2=");
	scanf("%d",&b);
	
	printf("Tong=%d\n",a+b);
	
	printf("hieu=%d\n",a-b);
	
	printf("tich=%d\n",a*b);
	
	printf("thuong=%.1f\n",(float)a/b);
	
	return 0;
}
