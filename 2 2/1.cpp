#include<iostream>
using namespace std;
int sequence(int a[],int n)
{
	int max=0;
	int b[200];
	if(a[0]>0)
	{
		b[0]=a[0];
	}
	else
	{
		b[0]=0;
	}
	for(int j=1;j<n;j++)
	{
		if(b[j-1]+a[j]>=a[j])
		{
			b[j]=b[j-1]+a[j];
		}
		else
		{
			b[j]=a[j];
		}
		if(max<b[j])
		{
			max=b[j];
			
		}
	}
	return max;
}
int main()
{
	int n;
	cin>>n;
	int a[200];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=sequence(a,n);
	cout<<k<<endl;



	return 0;
}