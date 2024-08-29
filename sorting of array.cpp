#include<iostream>
using namespace std;
int main (){
	int arr[5],i,j,temp;
	for(i=0; i<5; i++){
		cout<<"enter a value\n";
		cin>>arr[i];
	}
	cout<<"your entered array is \n";
	for(i=0; i<5; i++)
	{
		cout<<arr[i];
	}
	
	for(i=0; i<5; i++)
	{
		for (j=0; j<4; j++)
		{
			if ( arr[j]<arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
			
		}
		
	}
	cout<<endl;
	cout<<"your sorted array is \n";
	for(i=0; i<5; i++){
		
		cout<<arr[i];
		
	}
	
}