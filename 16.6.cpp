#include<stdio.h>
int tvt(int *arr , int size , int number2 ){
    for(int i=0 ; i<size ; i++){
    	if(arr[i]==number2){
    		return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,3,5,7,9,11,13};
	int n=sizeof(arr)/sizeof(int);
	int giatri;
	printf("moi ban nhap gia tri: ");
	scanf("%d",&giatri);
	int kq=tvt(arr , n , giatri);
	if(kq!=-1){
	    printf("gia tri can tim nam o vi tri %d",kq);
    }else{
    	printf("khong tim thay gia tri trong mang");
	}
	return 0;
}
