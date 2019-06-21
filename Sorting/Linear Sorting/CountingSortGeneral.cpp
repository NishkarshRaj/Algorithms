#include<iostream>
using namespace std;
int main()
{
	int size,n=0,i,k,flag,j,temp1;
	cout<<"Generic Counting Sort for Character Array!!"<<endl;
	cout<<"Enter the size of the character array: ";
	cin>>size;
	char input[size],arr[size],output[size],temp;
	//taking input from user
	cout<<"Enter the Character Array\n";
	for(i=0;i<size;i++)
	{
		cout<<"Enter the "<<i+1<<" element of the Array: ";
		cin>>input[i];
		arr[i]='`'; //initializing with rarest key
	}
	//arr = unique occurences array with n = size
	for(i=0;i<size;i++)
	{
		flag=0;
		for(k=0;k<n;k++)
		{
			if(input[i]==arr[k])
			{
				flag=1;
				break;
			}
		}
		//cout<<"Check"<<endl;
		if(flag==0)
		{
			arr[n]=input[i];
			n++;
		}
	}
	//creating the count array (integer)
	int count[n];
	for(i=0;i<n;i++)
	{
		count[i]=0;
		for(j=0;j<size;j++)
		{
			if(arr[i]==input[j])
			{
				count[i]++;
			}
		}
	}
	//displaying unique array
	cout<<"Displaying the unique characters\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
		cout<<"\n";
	//Sorting the unique characters
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
	if(arr[j]>arr[j+1])
	{
	temp = arr[j+1];
	arr[j+1] = arr[j];
	arr[j] = temp;
	temp1 = count[j+1];
	count[j+1] = count[j];
	count[j] = temp1;
	}
	}
	}
	//displaying sorted unique array arr
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	//displaying corresponding count
	for(i=0;i<n;i++)
	{
		cout<<count[i]<<" ";
	}
	cout<<"\n";
	//Building the output array
	k=0;
	for(i=0;i<n;i++)
	{
		while(count[i])
		{
			output[k++]=arr[i];
			count[i]--;
		}
	}
	//displaying the output array
	cout<<"Displaying the output Array\n";
	for(i=0;i<size;i++)
	{
		cout<<output[i]<<" ";
	}
	cout<<"\n";
}
