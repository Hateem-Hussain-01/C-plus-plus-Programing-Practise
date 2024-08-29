#include<iostream>
using namespace std;
int main(){
	int target;
	cout<<"enter a vlues as target";
	cin>>target;
	int len;
	cout<<"entr length of array\n";
	cin>>len;
	int num[len];
	cout<<"enter values for array\n";
	for(int i=0; i<len; i++){
		cin>>num[i];
	}
	for(int n=0; n<len; n++){
		for(int j= 1; j<len; j++){
			if(num[n]+num[j]==target){
				cout<<"["<<n<<","<<j<<"]";
			}
			else{
				continue;
			}
		}
	}
}