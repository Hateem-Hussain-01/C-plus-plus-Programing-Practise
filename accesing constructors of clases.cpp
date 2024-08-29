#include<iostream>
using namespace std;
class parent{
 protected:
 	int n,p,q,r,s,t;
public:
	parent(){
		n=0;
	}
 parent(int m){
 	n=m;
 }
 void show(){
 	cout<<"n= "<<n<<endl;
 }

};
 class child : public parent{
 	private:
 		char ch;
 	public:
 		child() : parent(){
 			ch = 'x';
 		}
 		child(char cg ){
		 
 			
 			
		 }
 	
 };