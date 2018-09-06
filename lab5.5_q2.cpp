//Using the library
#include<iostream>
using namespace std;
int main() {
	//Looping for making patterns
	for(int i=0; i<5; i++){// Print 5 stars in 1 and 5th row.
		if (i==0||i==4){
		for(int j=0;j<5;j++)
		cout<<"*";}
		else{cout<<"*   *";}//Print the other pattern
		cout<<endl;}
	cout<<endl;
return 0;
}
