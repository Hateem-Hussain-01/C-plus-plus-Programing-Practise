#include<iostream>
using namespace std ;
int main(){
	//int i= 0;
	for(int i=10;i<1000; i++){
		
		if(i%2==0 || i%3==0 || i%5==0 || i%7==0){
			continue;
		}
		cout<<i<<"is a prime number\n";
	}
}