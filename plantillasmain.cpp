
// Lina Diaz
// CIS 1202 101
// December 5, 2021


#include <iostream>
#include <conio.h>
using namespace std;


template <class DETODITO> 
void half(DETODITO number){
	number = number /2;
	cout <<number<<endl;
	
}
int main() {
		double a = 7.0;
	float b = 5.0f;
	int c=3;
	
	half(a);
	half(b);
	half(c);
	
	
	return 0;
}

