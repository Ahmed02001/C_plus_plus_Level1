#include <iostream>
using namespace std;

//problem #30

int ReadNumber() {
    int num;
    cout << "Please Enter Any Number?\n";
    cin >> num;
    return num;
}
int FactorialNumber(int num) {
    int sum = 1;
    for (int i = num; i >= 1; i--) {
            sum *= i;
    }
    return sum;
}
void PrintSum(int sum) {
    cout << "the factorial numbers = " << sum << endl;
}


int main()
{
    
    //problem #30

    PrintSum(FactorialNumber(ReadNumber()));
}
