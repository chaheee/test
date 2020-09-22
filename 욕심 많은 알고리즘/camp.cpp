#include<cstdio>
int main(){
	int l,p,v;
	int day=0;
	int cnt=0;
	while(1){
		day=0;
		scanf("%d %d %d",&l,&p,&v);
		if(l==0&&p==0&&v==0){
			break;
		}
		while(v>p){
			v=v-p;
			day+=l;	
		}
		if(v>l) day+=l;
		else day+=v;
		printf("Case %d: %d\n",++cnt,day);	
	}
	return 0;
}
