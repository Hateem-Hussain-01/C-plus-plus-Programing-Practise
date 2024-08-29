#include<iostream>
using namespace std;
//class B;
class A{
	private :
		int a,b,c;
	public:
	     A(){
			a = 20;
			b = 40;
		}
		friend class B;
};
class B {
	private :
		int c;
	public:
		void add(A obj1);
		
//	void B :: add(A obj1){
//		cout<< c = obj1.a+obj1.b;
//		                           
//		}
};
void B :: add(A obj1){
		 c = obj1.a+obj1.b;
		 cout<<c;
		                           
		}
int main(){
	A objd;
	B objf;
	objf.add(objd);
	return 0;
}