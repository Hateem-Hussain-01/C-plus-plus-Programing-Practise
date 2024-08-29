#include<iostream>
using namespace std ;
class array{
	private:
		int arr[10];
		int m;
		
	public :
	 void takevalues();
	 void showvalues();
	 void sort();
	 void sortedarray();
	 int max();
	 int secondmax();
	 	
};


	
	void array:: takevalues ()
	{
		cout<<"enter values of 10 integers\n";
		for(int i=0; i<10; i++){
			cin>>arr[i];
		}
	}
	void array::showvalues() {
    cout << "the values you entered are =\t";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

	
	
	void array::sort() {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

	void array :: sortedarray(){
			cout<<"the values of sortedarray  are =\t";
		for(int i=0; i<10; i++){
			cout<<arr[i];		}
		   
	
	int main()
	{
	array num;
	num.takevalues();
	num.showvalues();
	num.sort();
	num.sortedarray()
	}
	
