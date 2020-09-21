#include <stdio.h>
#include <map>

std::map<int,int> time;

int main()
{
	int n,a,b;
	for(scanf("%d",&n);n--;)
	{
		scanf("%d %d",&a,&b);
		time[a]++;
		time[b]--;
	}
	int cur=0,max=0;
	for(std::map<int,int>::iterator it=time.begin();it!=time.end();++it)
	{
		cur+=it->second;
		if(max<=cur) max=cur;
	}
	printf("%d",max);
	return 0;
}
