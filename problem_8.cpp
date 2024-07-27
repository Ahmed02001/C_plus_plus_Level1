#include <iostream>
using namespace std;


problem 8

enum enMark { pass = 1, fail = 2 };
float ReadMark() {
   float Mark;
   cout << "Please Enter Your Mark.\n";
   cin >> Mark;
   return Mark;
}
enMark CheckMark(int Mark) {
   if (Mark >= 50)
       return enMark::pass;
   else
       return enMark::fail;
}
void PrintNumber(int Mark) {
   if (CheckMark(Mark) == enMark::pass)
       cout << "Congratolation, you're Passed." << endl;
   else
       cout << "Sorry, you're failed." << endl;
}
int main(){
    //problem 8
    PrintNumber(ReadMark());
}