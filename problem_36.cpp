 #include <iostream>
#include <string>
using namespace std;


//peoblem #36

enum enOperationType { add = '+', sub = '-', multiply = '*', divide = '/' };

float ReadNumber(string massage) {
   int num;
   cout << massage << endl;
   cin >> num;
   return num;
}
enOperationType ReadOpType() {
   char OT = '+';
   cout << "please enter the operation type(+ , - , * , /)." << endl;
   cin >> OT;
   return (enOperationType)OT;
}
float Calculate(float number1, float number2, enOperationType  Optype) {
   switch (Optype) {
   case enOperationType::add:
       return number1 + number2;
   case enOperationType::sub:
       return number1 - number2;
   case enOperationType::multiply:
       return number1 * number2;
   case enOperationType::divide:
       return number1 / number2;
   default:
       return number1 + number2;

   }
}


int main()
{
    //prolrem #36
   float number1 = ReadNumber("Please eter number one.");
    float number2 = ReadNumber("please enter number two.");

    enOperationType OpTyoe = ReadOpType();

    cout << endl << "the Result = " << Calculate(number1, number2, OpTyoe) << endl;

}