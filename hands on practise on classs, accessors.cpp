#include<iostream>
using namespace std;
class Book
{
	private:
		int Bookid ;
		int pages ;
		float price;
	public:
		void get()
		{
			cout<<"enter bookid ="<<endl;
			cin>>Bookid;
			cout<<"enter pages of your book"<<endl;
			cin>>pages;
			cout<<"now please Enter orice of your book"<<endl;
			cin>>price;
		}
		void arr(int Bi, int pg, float rs){
		Bookid = Bi;
		pages = pg;
		price = rs;
					
		}
		void show (){
			cout<<"Bookid of your Book is ="<<Bookid<<endl;
			cout<<"pages of your book is = "<<pages<<endl;
			cout<<"price of your book is = "<<price<<endl;
			
		}
		float getprice(){
		return price;
		}
};
int main(){
	
	cout<<"let's compare your  book cost"<<endl;
	Book det1, det2;
	det1.arr(45,670 ,458.78);
	det2.get();
	cout<<"here is most costly bok is"<<endl;
	if (det1.getprice() > det2.getprice()){
		det1.show();
	}
	else {
		det2.show();
	}
	return 0;
	
	
}