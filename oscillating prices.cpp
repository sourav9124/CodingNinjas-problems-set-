#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	int profit;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int mx=-1;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			profit=ar[i]-ar[j];
			if(profit>mx)
			{
				mx=profit;
			}
		}
	}
	cout<<mx-1;
}
