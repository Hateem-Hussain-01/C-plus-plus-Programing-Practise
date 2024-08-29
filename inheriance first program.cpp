#include<iostream>
using namespace std ;
class A{
	protected:
	int promotion ;
	int n;
    public:
         A(){
    		promotion = 0;
		}
		void show();
		int Numberadd(){
			cout<<endl;
			cout<<"enter a number you want to add ";
			cin>>n;
			cout<<endl;
			promotion = promotion + n;
			return promotion;
			
		}
};
class B : public A {
	private :
		int decrement;
		
	public:
		int demotion(){
			cout<<endl<<"we will decrrease a 1 number from current value of promotion ";
			decrement = --promotion;
			cout<<endl;
			//cout<<decrement<<endl;
			cout<<endl;
			return decrement;
			
			}
		
};
void A ::show (){
	cout<<"the current value of promotion is "<< promotion<<endl;
	
}
int main(){
	B obj1;
	obj1.show();
	obj1.Numberadd();
	obj1.show();
	cout<<endl;
	obj1.demotion();
	obj1.show();
	return 0;
}