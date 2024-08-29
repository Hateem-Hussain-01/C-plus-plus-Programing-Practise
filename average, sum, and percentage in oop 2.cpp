#include<iostream>
using namespace std;
class marks{
	private:
		int b1,b2,b3,b4,b5;
		int tb1,tb2,tb3,tb4,tb5;
		float avrg;
		double som;
		float prc;
		int TM;
	
	public:
		void entermarks(){
			cout<<"enter obtained marks of five books one by one \n";
			cin>> b1 >> b2 >> b3 >> b4 >> b5;
		}
		void showmarks(){
			cout<<"you enetred marks are = \n";
			cout<<"b1 "<<b1<<endl<<"b2 "<<b2<<endl<<"b3 "<<b3<<endl<<"b4 "<<b4<<endl<<"b5 "<<b5<<endl;
		}
		double totalmarks(){
			cout<<"enter tottal marks of each book one by one \n";
			cin>> tb1 >> tb2 >> tb3 >> tb4 >> tb5;
			TM = tb1 + tb2 + tb3 + tb4 + tb5;
			cout<<"totall marks are ="<<TM;
			return TM;
			
		}
		
		float averageis(){
			/*cout<<"enter marks of five books one by one \n";
			cin>> b1 >> b2 >> b3 >> b4 >> b5;*/
			avrg = (b1 + b2 + b3 + b4 + b5) / 5.0;
			cout<<"average marks are = "<<avrg;
			return avrg;
		}
		int sum (){
			/*cout<<"enter marks of five books one by one \n";
			cin>> b1 >> b2 >> b3 >> b4 >> b5;*/
			som = b1 + b2 + b3 + b4 + b5;
			cout<<"som is = "<<som;
			return som ;
		}
		float per(){
			prc = (som / TM) * 100 ;
			cout<<"percentage is ="<<prc;
			return prc;
			
		}
		
};
int main(){
	marks s1;
	s1.entermarks();
	s1.showmarks();
	cout<<endl;
	s1.totalmarks();
	cout<<endl;
	s1.averageis();
	cout<<endl;
	s1.sum ();
	cout<<endl;
	s1.per();
	cout<<endl;

	
	return 0 ;
}