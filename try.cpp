//C++ Primer Plus 课后习题 p164 5.9 
// by itAir
// Try to use Google C++ programing style
#include "try.h"
#include <iostream>
#include <array>

using namespace std;

void main(){
	TilteShow();
  LongLine();
	// 1
	//int int_small , int_large;
	//int sum(0);
	//cout<< "Enter two interger begin with smaller one first: "<< endl;
	//cin>> int_small>> int_large;
	//for (int i = int_small; i <= int_large; i++){
	//	sum += i;
	//}
	//cout<< "The sum from "<< int_small<< " to "<< int_large<< " is "<< sum<< endl; */
	// 循环起始位置
	 LongLine();    
	//2 
	 array<double, kArSize> factorials;
	factorials.at(0) = factorials.at(1) = 1.0;
	for (int i = 2; i < kArSize; i++) factorials.at(i) = i * factorials.at(i-1);
	for (int i = 0; i < kArSize; i++) cout<< i << "!= "<< factorials.at(i) <<endl;
	// array 用法 类似于 带安全检查的 数组
	 LongLine();   
	//3
  int sum3(0), temp;
  cout<< "Enter some interger end with 0. \n";
  while ( cin>> temp && temp != 0 ){
    sum3 += temp;
  }
  cout<< "Sum is :"<< sum3 <<endl;
  // 循环输入cin用法 , 条件判断的初始值 注意  
  LongLine();//代替长线 inline 型




	system("pause");

}