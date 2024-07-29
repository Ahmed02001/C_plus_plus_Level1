#include <iostream>
using namespace std;
//problem #28

int ReadNumber() {
   int num;
   cout << "Please Enter Any Number?\n";
   cin >> num;
   return num;
}
int SumOddNumbers(int num) {
   int sum = 0;
   for (int i = 1; i <= num; i++) {
       if (i % 2 == 1)
           sum += i;
   }
   return sum;
}
void PrintSum(int sum) {
   cout << "the sum odd numbers = " << sum << endl;
}
int main()
{
    
    //problem #28
    
    /*PrintSum(SumOddNumbers(ReadNumber()));*/

}