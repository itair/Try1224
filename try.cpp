//C++ Primer Plus 课后习题 p164 5.9 
// by itAir
// Try to use Google C++ programing style
#include "try.h"
#include <iostream>
#include <array>
#include <string>

using namespace std;

const int kArSize = 16;
const double kInitialCapital = 100.0;
const int kMonthsPerYear = 12;
const array<string, kMonthsPerYear> kMonth = { "Jan", "Feb", "Mar", "Apr", 
  "May", "Jun", "Jul", "Aug", 
  "Oct", "Sep", "Nov", "Dec" };

void main(){
  showtitle();
  longline();
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
  longline();    
  //2
  array<double, kArSize> factorials;
 	factorials.at(0) = factorials.at(1) = 1.0;
 	for (int i = 2; i < kArSize; i++) factorials.at(i) = i * factorials.at(i-1);
  	for (int i = 0; i < kArSize; i++) cout<< i << "!= "<< factorials.at(i) <<endl;
  	// array 用法 类似于 带安全检查的 数组
  longline();   
  	//3
    int sum3(0), temp;
    cout<< "Enter some interger end with 0. \n";
    while ( cin>> temp && temp != 0 ){
       sum3 += temp;
      }
   cout<< "Sum is :"<< sum3 <<endl;
  // 循环输入cin用法 , 条件判断的初始值 注意  
  longline();//代替长线 inline 型
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
  longline();
  //5
  //int sum(0);
  //array<int, 12> sale_month;
  //cout<< "Enter salement by months:\n";
  //for (int i = 0; i < 12; i++)  {
  //  cout<< month.at(i)<<": ";
  //  cin>> sale_month.at(i);
  //  sum += sale_month.at(i);
  //}
  //cout<< "The sum of sales: "<< sum<< endl;
  // 循环用法
  longline();
  //6 
  int sum_all(0);
  array<int, 3> sum_in_year;
  array<array<int, kMonthsPerYear>, 3> sale_month_;
  sum_in_year.fill(0);
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

  

  longline();
  system("pause");

}