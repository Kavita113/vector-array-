#include<iostream>
using namespace std;
int main()
{
	//start your code from here
	int arr[]={2,2,2};
	int x;
	cout<<"Enter x:";
	cin>>x;
	int size=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	int j=size-1;
	int pair=0;
	while(i<j)
	{
		if(arr[i]+arr[j]==x)
		{
			pair++;
			i++;
			j--;
		}
		else if(arr[i]+arr[j]>x)
		{
		  j--;
		}
		else
		{
			i++;
		}
	}
	cout<<pair;
	return 0;
}

