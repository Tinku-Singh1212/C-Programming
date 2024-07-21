#include<iostream>
using namespace std;
int switch_day(int);
int switch_math(int);
int main()
{
	int num,a,b;
	cout<<"Choose the option"<<endl<<"1.for day choose"<<endl<<"2.for mathematical operation"<<endl;
	cin>>a;
	switch_day(a);
	cin>>b;
	switch_math(b);
	return 0;
}
int switch_day(int a)
{
	switch(a)
	{
		case 1:cout<<"sunday"<<endl;break;
		case 2:cout<<"monday"<<endl;break;
		case 3:cout<<"tuesday"<<endl;break;
		case 4:cout<<"wednesday"<<endl;break;
		case 5:cout<<"thursday"<<endl;break;
		case 6:cout<<"friday"<<endl;break;
		case 7:cout<<"saturday"<<endl;break;
		default :cout<<"wrong choose number enter between 1 to 7";
	}
}
