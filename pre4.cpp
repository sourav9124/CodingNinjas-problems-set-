#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int div,mod;
	
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	int sum1=0;int sum2=0;
	for(int i=0;i<n/2;i++)
	{
		int ans1=abs(ar[i]+ar[n-i-1])/10;
		int ans2=(ar[i]+ar[n-i-1])%10;

        
		
		cout<<ans1<<" "<<ans2<<endl;
		
	}
	
	
	
	
}
