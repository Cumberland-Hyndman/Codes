#include<bits/stdc++.h>
using namespace std;
int ans[1005],m[1005],a[1005],b[1005],s[1005];
int n,k,i,j,t;
inline void Read()
{
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=n;i++) cin>>b[i];
}
inline void solve()
{
	for(i=1;i<=n;i++)
	{
		m[i]=min(a[i],b[i]);
		s[i]=i;
	}
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(m[i]>m[j]) 
			{
				swap(m[i],m[j]);
				swap(s[i],s[j]);
			}
		}
	}
	k=0;
	t=n+1;
	for(i=1;i<=n;i++)
	{
		if(m[i]==a[s[i]])
		{
			k++;
			ans[k]=s[i];
		}
		else
		{
			t--;
			ans[t]=s[i];
		}
	}
	k=0;
	t=0;
	for(i=1;i<=n;i++)
	{
		k+=a[ans[i]];
		if(t<k) t=k;
		t+=b[ans[i]];
	}
	cout<<t<<endl;
	for(i=1;i<=n;i++) cout<<ans[i]<<" ";
	cout<<endl;
}
int main()
{
	Read();
	solve();
}
