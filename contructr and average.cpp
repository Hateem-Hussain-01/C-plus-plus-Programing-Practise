#include<iostream>
using namespace std;
class abc{
	private :
		int a,b;
	public :
	abc(){
		a=b=100;
		
	}
	float avrg(){
	cout<<(a+b)/2;
	cout<<endl;
	return 0;
	
		
	}
	~abc(){
		cout<<"mn nh dasni avrg ja kar lay jo karna ";
	}	
};
int main(){
	abc obj;
obj.avrg();
}
