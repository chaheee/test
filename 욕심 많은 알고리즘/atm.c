#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int man;
	scanf("%d",&man);
	
	int arr[man];
	int i,j;
	int cnt=0;
	for(i=0;i<man;i++){
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,man);

	for(i=0;i<man;i++){
		for(j=0;j<=i;j++){
			cnt+=arr[j];
		}
	}
	printf("%d",cnt);
	
	
	return 0;
}
void bubble_sort(int *n,int len){
	int i,j;
	int temp;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(n[i]>n[j]){
				temp=n[j];
				n[j]=n[i];
				n[i]=temp;
			}
		}
	}
}
