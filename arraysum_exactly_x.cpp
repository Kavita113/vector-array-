#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//start your code from here
	int a[]={-1,0,1,2,3};
	int m=sizeof(a)/sizeof(a[0]);  //size of array a
	int x;
	cout<<"Enter x:";cin>>x;
	int i=0,j=m-1; //two pointers i,j in which i points to the first index and j points last index of array
	bool match=0;
	while(i<j)
	{
		if(a[i]+a[j]==x)
		{
			match=1;
			break;
		}
		else if(a[i]+a[j]>x)
		{
			j--;
		}
		else
		{
			i++;
		}
		
	}
	if(match==1)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	
	return 0;
}

