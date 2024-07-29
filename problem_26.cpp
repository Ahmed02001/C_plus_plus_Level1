#include <iostream>
using namespace std;

//problem #26

void ReadNumber(int &num) {
   cout << "Please Enter Any Number?\n";
   cin >> num;
}

void printNumberFrom1ToNum(int num) {
   for (int i = 1; i <= num; i++) {
       cout << i << endl;
   }
}

int main()
{
    //problem #26
    int num;
    ReadNumber(num);
    printNumberFrom1ToNum(num);
    
    
}