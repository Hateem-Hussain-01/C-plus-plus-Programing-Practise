#include<iostream>
using namespace std;
class uzair;
class haider{
	private :
		int money1 = 50;
	public:
		friend void ali(uzair , haider);
		
};
class uzair {
	private :
		int money2 = 90;
	public:
		friend void ali(uzair , haider);
		
		
};
void ali (uzair c1 , haider c2){
	int d= c1.money2 + c2.money1;
	cout<<d<<endl;
}
int main (){
	uzair obj1;
	haider obj2;
	ali(obj1 , obj2);
	return 0;
	
}