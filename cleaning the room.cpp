#include<bits/stdc++.h>
using namespace  std;
int main()
{
	int n;
    cin>>n;
    int a,b;
    
    cin>>a>>b;
    
    int ar[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    int res=(a*a)+(b*b);
    res=sqrt(res);
    
    for(int i=0;i<n;i++)
    {
    	if(ar[i]<=res)
    	{
    		cout<<"DE"<<endl;
		}
		else
		{
			cout<<"NE"<<endl;
		}
	}
}
