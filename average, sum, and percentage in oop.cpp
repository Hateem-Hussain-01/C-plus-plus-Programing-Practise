#include<iostream>
using namespace std;
class marks{
	private :
	int b1,b2,b3,b4,b5;
	float avg;
	double sum;
	float per;
public:
	
	float avrg()
	{
		cout<<"here ia the AVERAGE marks=";
		avg=  b1+b2+b3+b4+b5/5;
		cout<<avg;
		return avg;
		
	}

		
};
int main(){
	
	cout<<"enter marks of five books one by one:\n";
	int b1,b2,b3,b4,b5;
	cin>>b1;
	cin>>b2;
	cin>>b3;
	cin>>b4;
	cin>>b5;
	cout<<"marks you entered are = \n";
	cout<<"b1="<<b1<<endl<<"b2="<<b2<<endl<<"b3="<<b3<<endl<<"b4="<<b4<<endl<<"b5="<<b5<<endl;
	marks s1;
	s1.avrg();
}