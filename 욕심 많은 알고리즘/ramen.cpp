#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int n;
	int i,j;
	int cnt=0;
	int max=0;
	vector <int> v;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		v.push_back(j);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(v[j]==0) break;
			else if(v[i]>1) {
				max=max+3*v[i];	
				break;
			}
			else if(v[i]==v[j]){
				cnt++;
			}	
		}
		if(cnt==1) max+=3;
		else if(cnt==2) {
			max+=5;
			i++;
		}
		else if(cnt==3){
			max+=7;
			i+=2;
		} 
		cnt=0; 
	}
	printf("%d\n",max);
	return 0;
}
