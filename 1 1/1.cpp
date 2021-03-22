#include<iostream>
using namespace std;
void divide(int n,int m)
{
	if(n==1&&m==1)
	{
		cout<<1<<endl;
	}
	if(n<m)
	{
		cout<<n;
		divide(n,n);
	}
	if(n==m)
	{
		cout<<n;
		divide(n,n-1);
	}
	if(n>m&&m>1)
	{
		cout<<n;
		divide(n,m-1);
		divide(n-m,m);

	}

}
int main()
{
	int num;
	cin>>num;
	divide(num,num);
	return 0;
}
