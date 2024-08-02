#include <iostream>
 using namespace std;
 
//problem #39

float ReadPositiveNumber(string massage) {
   float num;
   do {
       cout << massage << endl;
       cin >> num;

   } while (num <= 0);
   return num;
}
float CalculateReminder(float number1, float number2) {
   int reminder;
   reminder = number2 - number1;
   return reminder;
}

int main(){
    //problem #39

    float number1 = ReadPositiveNumber("Please Enter Positive Number 1?");
    float number2 = ReadPositiveNumber("please Enter Positive Number 2?");
    cout << "the totalBill = " << number1 << endl;
    cout << "the totalCachPaid = " << number2 << endl;

    cout << "\n********************\n" << endl;
    cout << "Reminder = " << CalculateReminder(number1, number2) << endl;
}
    
