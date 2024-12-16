#include<stdio.h>
int sum(int*number1,int*number2){
	return *number1+*number2;
}
int main(){
	int x=40,y=20;
	int tong;
	tong=sum(&x,&y);
	printf("tong cua hai so la %d",tong);
	return 0;
}
