#include<iostream>
using namespace std;
int dp[20][20];
void LCS(char a[],char b[],int m,int n)
{
	
	for(int x=0;x<=m;x++)
	{
		dp[x][0]=0;
	}
	for(int y=0;y<=n;y++)
	{
		dp[0][y]=0;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i-1]!=b[j-1])
			{
				if(dp[i-1][j]<dp[i][j-1])
				{
					dp[i][j]=dp[i][j-1];
				}
				else
				{
					dp[i][j]=dp[i-1][j];
				}

			}
			else
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
		}
	}
}


int main()
{
	char a[20],b[20];
	int m,n;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		cin>>b[j];
	}
	LCS(a,b,m,n);
	int q=m;
	int w=n;
	char c[20];
	int num=dp[q][w];
	int numx=num;
	while(dp[q][w])
	{
		if(dp[q][w]==dp[q-1][w-1]+1)
		{
			c[num]=a[q];
			num--;
			q--;
			w--;
			continue;
		}
		else if(dp[q][w]==dp[q-1][w])
		{
			q--;
			continue;

		}
		else if(dp[q][w]==dp[q][w-1])
		{
			w--;
			continue;
		}
	}
	for(int l=1;l<=numx;l++)
	{

		cout<<c[l];
	}
	cout<<endl;


	return 0;
}