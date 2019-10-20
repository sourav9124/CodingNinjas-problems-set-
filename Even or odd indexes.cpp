#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	int sum1,sum2;
	sum1=sum2=0;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
	  if(i%2==0 && ar[i]%2==0)
	  {
         sum1+=ar[i];
	  }
	  else if(i%2!=0 && ar[i]%2!=0)
	  {
	  	sum2+=ar[i];
	  }
	}
	cout<<sum1<<" "<<sum2<<endl;
}
