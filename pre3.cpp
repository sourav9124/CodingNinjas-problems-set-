#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0;
	int n;	
	cin>>n;
     int ar[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>ar[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j || (i+j)==(n-1)||i==0||j==0||i==n-1||j==n-1)
			{
				sum+=ar[i][j];
			}
		
		}
	}
	

	cout<<sum<<endl;
	
	
}
