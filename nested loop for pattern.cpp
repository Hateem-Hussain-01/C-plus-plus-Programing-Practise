#include<iostream>
using namespace std ;
int main (){
	int i = 0;
	for(i=0; i<=10;i++){
		for (int j=0; j<i; j++){
			cout<<i<<"\tIt's Huffy";
			if(j=7){
				continue ;
			}
		}
		cout<<endl;
	}
}