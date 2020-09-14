#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, num;
	
	scanf("%d %d",&n,&num);    
	int coin[n];
	int i,j;
	int cnt=0;
	for(i=0;i<n;i++) {
		scanf("%d",&j);
		coin[i]=j;
	}
	for(i=n-1;i>=0;--i){
		printf("%d, %d \n",i,coin[i]);
		if(num>=coin[i]){
			num=num-coin[i];
			cnt++;
			++i;
			//printf("- %d, 잔돈: %d\n",coin[i-1],num);
		}
	}
	printf("%d\n",cnt);


	return 0;
}
