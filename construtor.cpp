#include<iostream>
using namespace std;
class abc{
	public:
		abc(){
			cout<<" a lo bn gya jay constructor";
			
		}
		~abc(){
			cout<<" a lo ur gya jay constructor";
		}
};
int main(){
	abc obj;
	
}