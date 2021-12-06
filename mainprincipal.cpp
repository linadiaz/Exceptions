// Lina Diaz
// Sinclair Community College
// December 5, 2021



#include <iostream>


using namespace std;

 bool lleva= false;
 
char character(char start, int offset){
	
		if( isalpha(start) ){
			cout <<" First character "<<endl;
			cout << "is a letter , letter is  --> "<<start<<endl;
		}else{
			cout <<" first character "<<endl;
			lleva = true; // load variable with true because first character is not letterse
			cout<<" Is not a letter , character is --> "<<start<<endl;
	}
	
}