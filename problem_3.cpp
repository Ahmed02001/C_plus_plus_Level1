#include <iostream>
#include <string>
using namespace std;

//Problem 3
int ReadNum() {
    int number;
    cout << "Please Enter Any Number: ";
    cin >> number;
    return number;
}
void PrintNumberOddOrEven() {
    if (ReadNum() % 2 == 0)
        cout << "The Number Is \" EVEN\" " << endl;
    else
        cout << "The Number Is \" ODD\" " << endl;
}

//another solve.
enum enNumber { Even = 1, Odd = 2 };
int ReadNumber() {
    int num;
    cout << "Please Enter Any Number: ";
    cin >> num;
    return num;
}
enNumber CheckNumber(int num) {
    if (num % 2 == 0)
        return enNumber::Even;
    else
        return enNumber::Odd;
}
void PrintNumber(enNumber NumberType) {

    if (NumberType == enNumber::Even)
        cout << "the Number is Even." << endl;
    else
        cout << "the Number is Odd." << endl;
}

int main()
{

    //Problem 3
    PrintNumberOddOrEven();
    PrintNumber(CheckNumber(ReadNumber()));

    
}