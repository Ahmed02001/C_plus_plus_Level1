#include <iostream>
using namespace std;

//Problem 7
float ReadNumber() {
   float number;
   cout << "Please Enter Any Number.\n";
   cin >> number;
   return number;
}
float GetHalfNumber(float number) {
   float halfNum;
   halfNum = number / 2;
   return halfNum;
}
void PrintNumber(float halfNum) {
   cout << "the half number is " << halfNum << endl;
}


int main(){
     //problem 7
    PrintNumber(GetHalfNumber(ReadNumber()));
}