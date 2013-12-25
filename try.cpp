//C++ Primer Plus 课后习题 p164 5.9 
// by itAir
// Try to use Google C++ programing style
#include "try.h"
#include <iostream>
#include <array>

using namespace std;

void main(){
	cout<< "C++_Primer_Plus"<< endl;
	cout<< "    by itAir"<< endl;        
	cout<< "Hello World!"<< endl;
	cout<< "_________________________________\n\n";    
	// 1
	int int_small , int_large;
  int sum(0);
	cout<< "Enter two interger begin with smaller one first: "<< endl;
	cin>> int_small>> int_large;
	for (int i = int_small; i <= int_large; i++){
    sum += i;
	}
  cout<< "The sum from "<< int_small<< " to "<< int_large<< " is "<< sum<< endl; 
  // 循环起始位置
  cout<< "_________________________________\n\n";    
  //2 
  const int kArSize = 16;
  array<double, kArSize> factorials;
  factorials.at(0) = factorials.at(1) = 1.0;
  for (int i = 2; i < kArSize; i++) factorials.at(i) = i * factorials.at(i-1);
  for (int i = 0; i < kArSize; i++) cout<< i << "!= "<< factorials.at(i) <<endl;
  //
  cout<< "_________________________________\n\n";    




	system("pause");

}