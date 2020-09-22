#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int,int> &b){
	return (a.second<b.second);
} 
int main(){
	int n,a,b,i;
	scanf("%d",&n);
	vector <pair<int,int> >v;
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	sort(v.begin(),v.end(),sortbysec);
	
	int min=v[0].second;
	int cnt=1;
	for(i=1;i<n;i++){
		if(min<=v[i].first){
			min=v[i].second;
			cnt++;
		}
		
	}
	printf("%d",cnt);
	return 0;
}
