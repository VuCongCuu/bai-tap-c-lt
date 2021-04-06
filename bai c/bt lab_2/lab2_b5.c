#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	
	printf("day nho:");
	scanf("%d",&a);
	
	printf("day lon:");
	scanf("%d",&b);
	
	printf("chieu cao:");
	scanf("%d",&c);
	
	printf("dien tich=%.2f",(float)(a+b)*c/2);
	
	return 0;
}
