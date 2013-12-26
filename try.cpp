//C++ Primer Plus 课后习题 p164 5.9 
// by itAir
// Try to use Google C++ programing style
#include "try.h"
#include <iostream>
#include <array>
#include <string>
#include <cstring>

using namespace std;

const int kArSize = 16;
const double kInitialCapital = 100.0;
const int kMonthsPerYear = 12;
const array<string, kMonthsPerYear> kMonth = { "Jan", "Feb", "Mar", "Apr", 
  "May", "Jun", "Jul", "Aug", 
  "Oct", "Sep", "Nov", "Dec" };
const int kMaxLetters = 20;

struct Car 
{
  string company_name;
  int year;
};

void main(){
  showtitle();
  longline(1);
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
  longline(2);    
  //2
  array<double, kArSize> factorials;
 	factorials.at(0) = factorials.at(1) = 1.0;
 	for (int i = 2; i < kArSize; i++) factorials.at(i) = i * factorials.at(i-1);
  	for (int i = 0; i < kArSize; i++) cout<< i << "!= "<< factorials.at(i) <<endl;
  	// array 用法 类似于 带安全检查的 数组
  longline(3);   
  	//3
  int sum3(0), temp;
  cout<< "Enter some interger end with 0. \n";
  while ( cin>> temp && temp != 0 ){
    sum3 += temp;
  }
  cout<< "Sum is :"<< sum3 <<endl;
  // 循环输入cin用法 , 条件判断的初始值 注意  
  longline(4);//代替长线 inline 型
  //4
  double investsum_Daphne(kInitialCapital), investrate_Daphne(0.1);
  double investsum_Cleo(kInitialCapital), investrate_Cleo(0.05);
  int years(0);
  while (investsum_Cleo <= investsum_Daphne) {
    years += 1;
    investsum_Daphne += (kInitialCapital * investrate_Daphne);
    investsum_Cleo += (investsum_Cleo * investrate_Cleo);
  }
  cout << "Over " << years << " years\n"
       << "Cloe :$ " << investsum_Cleo
       << " is richer than Daphne :$" << investsum_Daphne << endl;
  //
  longline(5);
  //5
  int sum1(0);
  array<int, 12> sale_month;
  cout<< "Enter salement by months:\n";
  for (int i = 0; i < 12; i++)  {
    cout<< kMonth.at(i)<<": ";
    cin>> sale_month.at(i);
    sum1 += sale_month.at(i);
  }
  cout<< "The sum of sales: "<< sum1<< endl;
  // 循环用法
  longline(6);
  //6 
  int sum_all(0);
  array<int, 3> sum_in_year;
  array<array<int, kMonthsPerYear>, 3> sale_month_;
  sum_in_year.fill(0);
  cin.clear();
  for (int i = 0; i <= 2; i ++) {
    cout << "Enter salement by month in year " << i+1 << endl;
    for (int j = 0; j < 12; j++) {
      cout << kMonth.at(j) << " : ";
      scanf_s("%d", &sale_month_[i][j]);
      sum_in_year.at(i) += sale_month_.at(i).at(j);
    }
    sum_all += sum_in_year.at(i);
    cout << "Sum of year " << i+1 << " is " << sum_in_year.at(i) <<endl;
  }
  cout << "\nSum of all 3 years : " << sum_all <<endl;
  // const 定义 不要放入. h中
  longline(7);
  //7
   int num_car;
   cout << "How many cars do you wish to catalog? ";
   cin >> num_car;
   Car* cars = new  Car[num_car] ;
   for (int i = 0; i < num_car; i++ ) {
     cout << "Car #" << i << ":\n"
          << "Please enter the make: ";
     cin.get(); //流定向到下一行...准备getline
     getline(cin, cars[i].company_name);
     cout << "Please enter the year made: ";
     cin >> cars[i].year;
     }
   cout << "Here is your colleciton: \n";
   for (int i =0; i < num_car; i++) {
     cout << cars[i].year << "  " << cars[i].company_name << endl;
   }
   delete [] cars;
   //混合流中string的 geiline技巧 new 与 delete 
  longline(8);
  //8
  char str[kMaxLetters];
  int count(0);
  cout << " Enter some words, exit with 'done' \n";  
  while (cin >> str && 0 != strcmp(str, "done")) {
    count++;
  }
  cout << "Your entered a total of " << count << " words.\n";
  // 循环输入/
  longline(9);
  //9
  string str1;
  int count1(0);
  cout << " Enter some words, exit with 'done' \n";  
  while (cin >> str1 && "done" != str1) {
    count1++;
  }
  cout << "Your entered a total of " << count1 << " words.\n";
  longline(10);
  //10
  int line;
  cout << "Enter a line number: " <<endl;
  cin >> line;
  for (int i = 1; i <= line; i++){
    for (int j = 1 ; j <= line - i; j++)  cout << ".";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
  }
  // 多重循环控制
  longline();
  system("pause");
}