#include <iostream>
using namespace std;

//problem #32

void ReadNumAndPower(int& number, int& power) {
    cout << "Please Enter the number.\n";
    cin >> number;
    cout << "Please Enter The Power.\n";
    cin >> power;
}

int CalculateNumOfPower(int number, int power) {
    int result = 1;
    if (power == 0)
        return 1;
    while (power >= 1) {
        result *= number;
        power--;
    }
    return result;
}
void PrintResult(int result) {

    cout << "the Result = " << result << endl;
}

int main(){
    //problem #32
    int number, power;n
    ReadNumAndPower(number, power);
    PrintResult(CalculateNumOfPower(number, power));
}
    
