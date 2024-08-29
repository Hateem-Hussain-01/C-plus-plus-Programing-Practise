#include<iostream>
using namespace std;
class area{
	private:
		float w1, h1, w2, h2, area1, area2;
		
		public:
			float areaof1(){
				{
	cout<<"enter height and weight of reactangle\n";
	cin>>h1;
	cout<<endl;
	cin>>w1;
	cout<<endl;
	cout<<"your enteres values are : "<<"height= "<<h1<<" and "<<"weight= "<<w1<<endl;
	area1 = h1 * w1;
	cout<<area1;
	return 0 ; }
	float areaof2(){
	cout<<"enter height and weight of triangle\n";
	cin>>h2;
	cout<<endl;
	cin>>w2;
	cout<<endl;
	cout<<"your entered values are : "<<"height= "<<h2<<" and "<<"weight= "<<w2<<endl;
	area2 =  0.5 * (h2*w2);
    cout<<area2;
    return 0;
	

};
			
				
//};
//float area :: areaof1()
//float area :: areaof2()
int main(){
	area rec;
	rec.areaof1();
	rec.areaof2(); 
}}
