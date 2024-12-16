#include<stdio.h>
void tvt(int *arr , int number1 , int number2){
	arr[number1]=number2;
}
int main(){
	int arr[]={1,3,5,7,9,11,13};
	int n=sizeof(arr)/sizeof(int);
	int giatri , vitri;
	printf("mang hien tai la:");
	for(int i=0 ; i<n ; i++){
		printf("%d\t",arr[i]);
	}
	printf("\nmoi ban nhap gia tri: ");
	scanf("%d",&giatri);
	printf("\nmoi ban nhap vi tri: ");
	scanf("%d",&vitri);
	tvt(arr,vitri,giatri);
	if(vitri>n){
		printf("vitri khong hop le");
		return 0;
	}
	tvt(arr,giatri , vitri);
	printf("mang moi la:");
	for(int i=0 ; i<n ; i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
