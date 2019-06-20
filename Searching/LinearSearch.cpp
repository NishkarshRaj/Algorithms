#include<iostream>
using namespace std;
int main()
{
	int n,i,el,flag=0,pos;
	cout<<"Linear Searching Code"<<endl;
	cout<<"Enter the maximum size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Insertion of array\n\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<" element of the array: ";
		cin>>arr[i];
	}
	cout<<"Enter the element to be searched: ";
	cin>>el;
	for(i=0;i<n;i++)
	{
		if(el==arr[i])
		{
			pos=i+1;
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Element exists in the array at "<<pos<<" position"<<endl;
	}
	else
	{
		cout<<"Element not found in the array"<<endl;
	}
}
