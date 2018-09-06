//Using the library
#include<iostream>
using namespace std;
int main (){ // Looping for making patterns
	for(int i=0; i<5; i++){    //Print the five stars
		if(i==0||i==4){
		for(int j =0;j<5;j++)
		cout<<"*";}
		else if(i==2)      //Print the required pattern
		{cout<<"* * *";}
		else
		{cout<<"** **";}   // Print the required pattern
		cout<<endl;}
	cout<<endl;
return 0;
}
