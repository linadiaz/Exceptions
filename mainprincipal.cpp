// Lina Diaz
// Sinclair Community College
// December 5, 2021


#include <iostream>


using namespace std;

 bool lleva= false;
 
char character(char start, int offset){
	
		if( isalpha(start) ){
			cout <<" First character "<<endl;
			cout << " is a letter ,  the letter is --> "<<start<<endl;
		}else{
			cout <<" first character "<<endl;
			lleva = true; // loads variable with true because fisr character is not a letter
			cout<<" is not a letter  , character is  --> "<<start<<endl;
	}
	
}
// method  of exception when first character is not a letter 
invalidRangeException(){
	cout  << " entro a la excepcion "<<endl;
	cout << " ERROR NO COMIENZA CON LETRAS"<<endl;
}



int main() {

    char datos[] = "Dios dame sabiduria"; // 
      
     try{
      	   char datos[] = "Dios dame sabiduria"; // cadena de entrada
      	   	cout << "================================================="<<endl;
    		cout << " String a analizar "<<endl;
    	    cout <<datos<<endl;
      	   	cout << "================================================="<<endl;
    		character(datos[0], 0); // llama metodo que analiza el string 
    	
      		if(lleva == true){
		           	throw invalidRangeException(); // lanza la exception 
	 		}		
     		
     		
	 }catch(...){
	 	cout << " error  "<<endl;
	 }
	 
	
	 try{
      	   
	 		char datos1[] = " Programming Assignment" ;  // cadena de entrada
      	   	cout << "================================================="<<endl;
    		cout << " String to analize  "<<endl;
    	    cout <<datos1<<endl;
      	   	cout << "================================================="<<endl;
    		character(datos1[0], 0); // calls method to analize string  
    	
      		if(lleva == true){
		           	throw invalidRangeException(); // lanza la exception 
	 		}		
     		
     		
	 }catch(...){
	 	cout << " error  de salidad "<<endl;
	 }

	
	return 0;
}
