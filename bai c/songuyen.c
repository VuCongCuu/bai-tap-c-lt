#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("so%d\n",a);
	scanf("%d",&a);
	if(a>0){
		printf("%d la so nguyen duong \n",a);
	}
	if(a=0){
		printf("%d la 0 \n",a);
	}
	if(a<0){
		printf("%d la so nguyen am \n",a);
	}
	return 0;
}
