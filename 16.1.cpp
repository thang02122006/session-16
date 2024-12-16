#include<stdio.h>

int main(){
	int a=5;
	int *aPtr=&a;
	printf("gia tri cua con tro = %d",*aPtr);
	printf("\ndia chi cua con tro = %lu",(unsigned long)&aPtr);
	return 0;
}
