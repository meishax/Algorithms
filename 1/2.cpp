#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double up;
	up=3*pow(sin(40*3.14159267/180),4);
	double down;
	down=4*pow(sin(70*3.14159267/180),2)+3*pow(sin(20*3.14159267/180),2)*
		pow(sin(40*3.14159267/180),2)-6*sin(70*3.14159267/180)
		*sin(20*3.14159267/180)*sin(40*3.14159267/180);
	cout<<up/down<<endl;
	cout<<asin(up/down)*180/3.14159267<<endl;
	return 0;
}