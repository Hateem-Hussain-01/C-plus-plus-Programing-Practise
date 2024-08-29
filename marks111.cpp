#include<iostream>
using namespace std;
class marks{
	private:
		float b1, b2, b3, sum, avrg;
		
		public:
			void in();
			float sum1();
			float averag();
				
};
void marks :: in(){
	cout<<"enter marks of your 3 books =";
	cin>>b1>>b2>>b3;
	cout<<"your entered values are = "<<b1<<" "<<" "<<b2<<" "<<b3;
}
float marks :: sum1(){
	cout<<"sum of your narks are =";
	sum = b1+b2+b3;
	cout<<sum;
	return 0;
}
float marks :: averag(){ cout<<"average of your marks are = ";
avrg = (b1+b2+b3)/3;
cout<<avrg;
return 0 ;
}
int main()
{
	marks s1;
	s1.in();
	cout<<endl;
	s1.sum1();
	cout<<endl;
	s1.averag();
	cout<<endl;
}









