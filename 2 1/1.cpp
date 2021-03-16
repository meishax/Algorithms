#include<iostream>
using namespace std;
int main()
{
	int c,n;
    cin>>c>>n;
    int w[25]={0},v[25]={0};
	int sum[25][25]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
	}
	for(int j=1;j<=n;j++)
	{
		cin>>v[j];
	}
    for(int k=1;k<=n;k++)
        for(int p=c;p>=0;p--)
        {
            if(p>=w[k])//如果装得下
			{
				if(sum[k-1][p-w[k]]+v[k]>=sum[k-1][p])
				{

					sum[k][p]=sum[k-1][p-w[k]]+v[k];
				}
                    
				else
				{

					sum[k][p]=sum[k-1][p];
				}
			}
            else//如果装不下
                sum[k][p]=sum[k-1][p];
        }
    cout<<sum[n][c]<<endl;
	return 0;

}