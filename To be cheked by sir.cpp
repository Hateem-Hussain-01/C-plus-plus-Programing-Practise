#include<iostream>
using namespace std;
class marks{
	private:
		int b1,b2,b3,b4,b5;
		float avrg;
		double som;
		int prc;
		int TM;
	
	public:
		void entermarks(){
			cout<<"enter marks of five books one by one \n";
			cin>> b1 >> b2 >> b3 >> b4 >> b5;
		}
		double totalmarks(){
			TM = b1 + b2 + b3 + b4 + b5;
			return TM;
			
			
		}
		void showmarks(){
			cout<<"you enetred marks are = \n";
			cout<<"b1"<<b1<<endl<<"b2"<<b2<<endl<<"b3"<<b3<<endl<<"b4"<<b4<<endl<<"b5"<<b5<<endl;
		}
		float averageis(){
			
			avrg = (b1 + b2 + b3 + b4 + b5) / 5.0;
			cout<<"average marks are = "<<avrg;
			return avrg;
		}
		int sum (){
		
			som = b1 + b2 + b3 + b4 + b5;
			cout<<"som is = "<<som;
			return som ;
		}
		int per(){
			prc = som / TM * 100 ;
			cout<<"percentage is ="<<prc;
			return prc;
			
		}
		
};
int main(){
	marks s1;
	s1.entermarks();
	cout<<endl;
	s1.showmarks();
	cout<<endl;
	s1.averageis();
	cout<<endl;
	s1.sum ();
	cout<<endl;
	s1.per();
	cout<<endl;
	s1.totalmarks();
	cout<<endl;
	
	return 0 ;
}