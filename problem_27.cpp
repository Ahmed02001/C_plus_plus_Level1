#include <iostream>
using namespace std;
//problem #27

void ReadNumber(int& num) {
   cout << "Please Enter Any Number?\n";
   cin >> num;
}

void printNumberFrom1ToNum(int num) {
   for (int i = num; i >= 1; i--) {
       cout << i << endl;
   }
}

int main()
{
    //problem #27
    int num;
    ReadNumber(num);
    printNumberFrom1ToNum(num);

    
}