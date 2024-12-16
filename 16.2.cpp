#include<stdio.h>

void jazu(int *input1 , int*input2){
	int temp=*input1;
	*input1=*input2;
	*input2=temp;
}
int main(){
	int a=30 ,b=70;
	printf("truoc khi doi cho");
	printf("\n%d\t%d",a,b);
	jazu(&a,&b);
	printf("\nsau khi doi cho");
	printf("\n%d\t%d",a,b);
	return 0;
}

