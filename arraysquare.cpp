#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
	int arr[]={-4,-3,-1,0,2,10};
	int n=sizeof(arr)/sizeof(arr[0]); //size of arr
	int i=0,j=n-1; //pointer to point at first and last index of arr
	int index=n-1; // pointer to point at the starting index of the ans array 
	int ans[n];   //array in which value after squaring will be stored 
     int num[n];  //array in which numbers will be stored after sorting with their absolute values
	 while(index>=0)
	 {
	 	if(abs(arr[i])>abs(arr[j]))
	 	{
	 		num[index]=abs(arr[i]);
	 		i++;
	 		index--;
		 }
		else
		{
			num[index]=abs(arr[j]);
			j--;
			index--;
		 } 
		 }
		 
	i=0;
	j=n-1;
	index=0;	 	
	while(i<=j && index>=0)
	{
		for(int k=0;k<n;k++)
		{
			if(abs(num[i])<abs(num[j]))
		{
			ans[index]=num[i]*num[i];
			index++;
			i++;
		}
		else
		{
		    ans[index]=num[j]*num[j];
			index++;
			j--;	
		}
		}
		
	}
	cout<<"array after squaring: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	} 
}
	

