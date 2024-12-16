#include<stdio.h>
int main(){
	int arr[]={1,3,2,4,3,5,4,6,5,7,6,8,7,9,8};
	int *number=arr;
	for(int i=0 ; i<sizeof(arr)/sizeof(int) ; i++){
		printf("%d\n",*number);
		*number++;
	}
	return 0;
}
