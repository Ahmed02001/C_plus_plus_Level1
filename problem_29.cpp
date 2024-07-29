#include <iostream>
using namespace std;
//problem #29

int ReadNumber() {
   int num;
   cout << "Please Enter Any Number?\n";
   cin >> num;
   return num;
}
int SumEvenNumbers(int num) {
   int sum = 0;
   for (int i = 1; i <= num; i++) {
       if (i % 2 == 0)
           sum += i;
   }
   return sum;
}
void PrintSum(int sum) {
   cout << "the sum Even numbers = " << sum << endl;
}

int main()
{
    
    
    PrintSum(SumEvenNumbers(ReadNumber()));

    
}