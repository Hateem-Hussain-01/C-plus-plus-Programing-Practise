#include<iostream>
using namespace std;
class test{
	private:
		int a,b,c,d,e;
		//cout<<"enter two numbrs you want to add ";
		//cin<<a,b;
	public:
//		void getno(){
//		
//		}
		void multiply();
		test();
		~test();
		};
	void test :: multiply(){
		c=a*b;
		cout<<c;
		cout<<endl;
		}
	test :: test(){
		cout<<endl;
		cout<<"enter the numbers you want to operate on ";
		cin>>a>>b;
		cout<<endl;
	}	
	test :: ~test(){
		cout<<"destructor called";
		cout<<endl;
		e = a-b;
		cout<<e;
		
		cout<<endl;
	}
 int main(){
 	 test class1;
 	 cout<<endl;
	 //class1.getno();
	 class1.multiply();
	 return 0;
}
	
	