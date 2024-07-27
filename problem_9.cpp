 #include <iostream>
 using namespace std;


 //problem 9
void ReadNumbers(int& num1, int& num2, int& num3) {
   cout << "Please Enter Number One?\n";
   cin >> num1;
   cout << "Please Enter Number Two?\n";
   cin >> num2;
   cout << "Please Enter Number Tree?\n";
   cin >> num3;
}
int SumOf3Numbers(int num1, int num2, int num3) {
   return num1 + num2 + num3;
}
void PrintNumbers(int total) {
   cout << "the sum of 3 numbers = " << total << endl;
}

//another solve.
struct strSumNumbers {
    int num1;
    int num2;
    int num3;
};
strSumNumbers ReadNumbers() {

    strSumNumbers Num;
    cout << "Please Enter Number One?\n";
    cin >> Num.num1;
    cout << "Please Enter Number Two?\n";
    cin >> Num.num2;
    cout << "Please Enter Number Three?\n";
    cin >> Num.num3;
    return Num;
}
int SumOfNumbers(strSumNumbers Num) {
    return Num.num1 + Num.num2 + Num.num3;
}
void PrintSumOf3Numbers(int Sum) {
    cout << "The Sum Of Numbers = " << Sum << endl;
}

 int main(){

     //problem 9
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintNumbers(SumOf3Numbers(num1, num2, num3));

    PrintSumOf3Numbers(SumOfNumbers(ReadNumbers()));
 }