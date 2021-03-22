#include <iostream>
using namespace std;
//二分查找  返回位置标号  时间复杂度O(logN)  
void binarySearch(int list[],int left,int right,int number)
{
	int index=0;
    if(list==NULL)
    {
		cout<<"NULL"<<endl;
		index=-1;
	}
    int mid=(right+left)/2;
    if(left>right&&index==0)
    {
		index=-1;
        cout<<right<<" "<<left<<endl;
    }
    if(number==list[mid]&&index==0)
    {
        index=-1;
        cout<<mid<<" "<<mid<<endl;
	
    }
    else if(number>list[mid]&&index==0)
    {
        binarySearch(list,mid+1,right,number);
    }
    else if(number<list[mid]&&index==0)
    {
        binarySearch(list,left,mid-1,number);
    }
}

int binarycodeSearch(int list[],int left,int right)
{
	int middle=(left+right)/2;
	while(left<=right)
	{
		middle=(left+right)/2;
		if(middle==list[middle])
		{
			return middle;
		}
		if(middle>list[middle])
		{
			left=middle+1;
		}
		if(middle<list[middle])
		{

			right=middle-1;
		}
		if(left>right)
		{
			return -1;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int x;
	cin>>x;
    int a[200];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    int left = 0;
    int right = n-1;
    binarySearch(a,left,right,x);

	int m=binarycodeSearch(a,left,right);
	cout<<m<<endl;

    return 0;
}