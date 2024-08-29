#include<iostream>
using namespace std ;
int tab(int a, int b, int c);
int main()
{
	int x,y,z;
	tab(x,y,z);
	return 0;
	
}
 int tab(int a, int b, int c)
 {
 	cout<<"enter the number of table Which you want to print "<<endl;
 	cout<<"also tell me starting and ending point of table";
 	cin>>a;
 	cout<<endl;
 	cin>>b;
 	cout<<endl;
 	cin>>c;
 	cout<<endl;
 	for(int i=b; i<=c; i++)
 	{
 		cout<<a<<"*"<<i<<"="<<a*i<<endl;
	 }
 }