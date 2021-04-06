#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("toan:");
	scanf("%d",&a);
	
	printf("hoa:");
	scanf("%d",&b);
	
	printf("ly:");
	scanf("%d",&c);
	
	printf("tong 3 mon=%d\n",a+b+c);
	printf("trung binh 3 mon =%.2f",(float)(a+b+c)/3);
	return 0;
}
