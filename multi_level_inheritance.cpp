#include<iostream>
#include<string>
using namespace std;
class person
{
	protected:
		int id;
		char name[25],adress[50] ;
		
	public:
		person(){
			id= 0;
			name[0] = '0';
			adress[0] = '0';
		}
	    void input(){
	    	cout<<"enter your name\n";
	    	cin>>name;
	    	cout<<"enter your id\n";
	    	cin>>id;
	    	cout<<"enter your adress \n";
	    	cin>>adress;
	    	
		}
		void show(){
			cout<<"your name is : "<<name<<"\n";
			cout<<"your id is : "<<id<<"\n";
			cout<<"your adress is : "<<adress<<"\n";
			
		}
		
};
 class student : public person
 { private:
 	int rno;
 	int marks;
   public:
   	
   	void input(){
   		person :: input();
   		cout<<"enter your roll number = ";
   		cin>>rno;
   		cout<<endl;
   		cout<<"enter your marks = ";
   		cin>>marks;
   		
	   }
	   void show(){
	   	person :: show();
	   	cout<<"your roll no is = "<<rno<<"\n";
	   	cout<<"your marks are = "<<marks<<"\n";
	   	
	   }	
 };
 class scholarship{
 	private:
 		char scholarship_name[50];
 		int amount;
 	public:
 		
 		void input(){
 			cout<<"input function called";
 			student :: input ();
 			cout<<endl;
 			cout<<"enter name of your scholarship : \n";
 			cin>>scholarship_name;
 			cout<<"\n enter amount of your scholarship\n";
 			cin>>amount;
		 }
		void show(){
		student ::show ();
			cout<<"your scholarship name is = "<<scholarship_name;
			cout<<endl;
			cout<<"your amount of scholarship is = "<<amount<<"\n";
			
		}
 };
 int main(){
// 	scholarship s;
// 	s.input();
// 	cout<<endl;
// 	s.show();
// 	
person s;
s.input();
s.show();
return 0;
 }
 