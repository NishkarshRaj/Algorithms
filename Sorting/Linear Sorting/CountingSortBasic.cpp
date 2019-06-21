#include<iostream>
using namespace std;
int main()
{
	int n,i,k,temp;
	cout<<"Counting sort for digits from 0-9"<<endl;
	cout<<"Enter the size of array for input: ";
	cin>>n;
	int arr[n],count[10],output[n];
	//initializing array and output array to 0
	for(i=0;i<10;i++)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<" element of the array: ";
		cin>>arr[i];
		count[arr[i]]++;
		output[i]=0;
	}
	//display array
	cout<<"\nDisplaying the Array\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	//display count
	cout<<"\nDisplaying Count of all digits\n";
	for(i=0;i<10;i++)
	{
		cout<<count[i]<<" ";
	}
	cout<<"\n";
	/*
	cout<<"Displaying the modified count array\n";
	for(i=1;i<10;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=0;i<10;i++)
	{
		cout<<count[i]<<" ";
	}
	*/
	cout<<"\n";
	//Building output array
	k=0;
	for(i=0;i<10;i++)
	{
		while(count[i])
		{
			output[k++]=i;
			count[i]--;
		}
	}
	cout<<"\nDisplaying the Output Array\n";
	for(i=0;i<n;i++)
	{
		cout<<output[i]<<" ";
	}
	cout<<"\n";
}
