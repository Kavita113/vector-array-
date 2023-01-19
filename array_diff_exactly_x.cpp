#include<iostream>
using namespace std;
int main()
{
	//start your code from here
	int a[]={9,23,45,69,78};
	int m=5;
	int x;
	cout<<"Enter x:"; cin>>x;
	int i=0,j=1;
	bool match=false;
	while(i<j)
	{
		if(a[j]-a[i]==x)
		{
			match=true;
			break;
		}
		else if(a[j]-a[i]<x)
		{
			j++;
		}
		else
		{
			i++;
		}
	}
	if(match==true)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}

