#include<iostream>
#include<string.h>
using namespace std;
struct bone
{
	int val;
	int vol;
}bone[1001];
int t,n,v;
int dp[1011];
int ans()
{
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		for(int j=v;j>=bone[i].vol;j--)
			dp[j]=max(dp[j],dp[j-bone[i].vol]+bone[i].val);
	}
	return dp[v];
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>v;
		for(int i=1;i<=n;i++) cin>>bone[i].val;
		for(int i=1;i<=n;i++) cin>>bone[i].vol;
		cout<<ans()<<endl;
	}
	return 0;
}
