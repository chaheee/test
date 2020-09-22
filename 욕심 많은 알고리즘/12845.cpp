#include <iostream>              
#include <vector>              
#include <algorithm>          
#include <functional> 

using namespace std;

int main(){
	int n,i,c;
	int gold=0;
	int max;
	scanf("%d",&n);
	vector<int> v;
	for(i=0;i<n;i++) {
		scanf("%d",&c);
		v.push_back(c);
	}
	sort(v.begin(), v.end(), greater<int>() );
	max=v[0];
	for(i=1;i<n;i++){
		gold=gold+max+v[i];
	}
	printf("%d",gold);
	return 0;
}
