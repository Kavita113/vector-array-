#include<iostream>
#include<vector>

using namespace std;

int mergearray(int arr1[],int m,int arr2[],int n)
{
	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	int arr3[m+n];
	while(i>=0 && j>=0)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k--]=arr2[j--];
		}
		else
		{
			arr3[k--]=arr1[i--];
		}
	}
	
	while(j>=0)
	{
		arr3[k--]=arr2[j--];
	}
	
	while(i>=0)
	{
		arr3[k--]=arr1[i--];
	}
	
	cout << "Array after merging" <<endl;
    for(int i=0;i<m+n;i++)
        cout<<arr3[i]<<" ";
}
int main()
{
	//start your code from here
	int arr1[]={1,3,5};
	int m=3;    //size of arr1
	int arr2[]={2,4,6};
	int n=3;   //size of arr2
	mergearray(arr1,m,arr2,n);
	return 0;
}

