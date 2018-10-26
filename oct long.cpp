#include<iostream>
using namespace std;
int main()
{
	long i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		long s,j,k=0,l=0,x=0;
		s=1;
		cin>>j;
		while(j>=0)
		{
		if(j<=2)
		{
		k=s;
		break;
	}
		else
		if(j>2&&j<=10)
		{
		l=s;
		break;
	}
		else
		if(j>10&&j<=26)
		{
		x=s;
		break;	
		}
		
		else
		{
			s=s*2;
			j=j-26;
		}
	}
		cout<<k<<' '<<l<<' '<<x<<endl;
		
	}
}
