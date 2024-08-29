#include<iostream>
#include<cstring>
using namespace std;
class tv{
	private:
		char brandname[20];
		char carname[20];
		double carmodel;
		
	public:
		tv(const char brand[20] , const char car[20], double model);
		void change(const char brand[20] , const char car[20], double model);
		void Display();
		
};
tv :: tv(const char brand[20] ,const char car[20], double model){
	strcpy(brandname, brand );
	strcpy( carname, car );
	model = carmodel;	
}
void tv :: change(const char brand[20] , const char car[20], double model){
	strcpy(brandname, brand);
	strcpy(carname, car);
	carmodel = model;	
}
void tv :: Display()
{
	//cout<<"displaying info about product\n";
	cout<<"name of brnd is :"<<brandname<<"\n";
	cout<<"name of car is :"<<carname<<"\n";
	cout<<"year of model is : "<<carmodel<<"\n";
 } 
 int main(){
 	cout<<"displaying info about product\n";
 	tv test("Bugatti", "Bugatti C1 Sports", 2024);
 	test.Display();
 	cout<<"displaying object details after changing \n";
 	test.change("ferarri", "ferrari c33" , 25.0);
 	test.Display(); 	
 	
 }
