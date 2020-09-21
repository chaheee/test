#include<cstdio>

int main(){
	int n,i;
	int a,b,c;
	long long cnt=0;

	scanf("%d",&n);
	int* arr=new int[n];
	
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	scanf("%d %d",&b,&c);
	
	for(i=0;i<n;i++){
		printf("arr[%d]=%d cnt=%d\n",i,arr[i],cnt);
		arr[i]-=b;
		cnt++;
		if(arr[i]>0) {
			if(arr[i]%c==0) cnt+=(arr[i]/c);
			else cnt+=(arr[i]/c)+1;
		}				
	}
	
	printf("%lld",cnt);
	return 0;
}
