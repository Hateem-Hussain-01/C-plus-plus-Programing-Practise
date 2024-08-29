#include<iostream>
using namespace std;
int main()
{
	int size = 5;
	int total;
	int num[size];
	int squares[size];
	int cubes[size];
	int sum[size];
	cout<<"entering values to arrays";

	for (int i = 0; i<5; i++){
		num[i]= i;
		squares[i] = i*i;
		cubes[i] = i*i*i;
		sum[i]= num[i] + squares[i] + cubes[i];
		
		
	} 
	cout<<endl;
	cout<<"numbers:\t";
    for (int i= 0; i<5; i++){
    	cout<<num[i]<<"\t";
    	
	}	
	cout<<endl;
	cout<<"squares:\t";
	for (int i = 0; i<5; i++)
	{	cout<<squares[i]<<"\t";
	}
	cout<<endl;
	cout<<"cues:\t\t";
	
	for (int i= 0; i<5; i++)
	{ 
	cout<<cubes[i]<<"\t";
		
		
	}
	cout<<endl;
	cout<<"sum\t\t";
   
	//cout<<endl;
	for (int i= 0; i<5; i++)
	{
		cout<<sum[i]<<"\t";
		total = total + sum[i];
	}
	 cout<<endl;
	cout<<"Grand Totall is "<<total<<endl;
	return 0;
	
	
	
	
}