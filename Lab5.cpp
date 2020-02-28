/**
* Program Name: More about Classes
* Program Discription: Lab 5 part 2 Duplicating a constructor
* and creating a string class
* Algorythem: is on the site
* Date:2/27/2020
* Programers: Shachar Habusha, Chandler Ott, Samsuan Nejahad, John Rollinson
**/
#include <iostream>
#include <cstring>

using namespace std;

class String{
	private:
		char *string ; 
 	    int size ;	
 	    
 	public:
 	 String(const char *s = "") ;    // constructor 
 	 String(const String &) ;   	 // copy constructor
     ~String() ;                     // destructor 
     void print() ;                  // print the string 
     void change(const char *) ;     // reassign the string 
 		
};

int main(){
		// Create String using a constructor and assignment statement
	  cout << "Create two strings, one using constructor, " << "another an assignment statement" << endl ;
	  String str1("MiraCosta College") ;       // constructor
	  String str2 = str1 ;                     // assignment
	  
	  str1.print();
	  str2.print();
	  
	   // Use the change method and print
	  cout << "\nAfter changing string 2 using change()" << endl ;
	  str2.change("Cal State San Marcos") ; 
	  str2.print();
	  // Use the change method on string 1 and print
	  cout << "\nAfter changing string 1 using change()" << endl ;
	  str1.change("UCSD") ;
	  str1.print();
	
	return 0;
}

 //Constructor
  String::String(const char *original) {  
     size = strlen(original) ; 
     string = new char[size + 1] ; 
     strcpy(string, original) ; 
 }
 
   void String::change(const char *original) {  
     delete [] string ; 
     size = strlen(original) ; 
     string = new char[size + 1] ; 
     strcpy(string, original) ; 
  }
  
  String::~String(){
  	delete []string;
  	size = 0;
  } 
  
  void String::print(){
  	cout <<"The String is: " <<  endl;
  	for(int i = 0; i < size; i++){
  		cout << *(string+i);
	  }
	  cout<<endl;
}

 // Copy constructor that creates a new String
  String::String(const String &original) { 
     size = original.size ; 
     string = new char[size + 1] ; 
     strcpy(string, original.string) ; 
  } 
  
  
