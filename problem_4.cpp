#include <iostream>
#include <string>
using namespace std;


//Problem 4

void ReadAge(int& age, bool& deiver) {
    cout << "Please Enter Your Age: ";
    cin >> age;
    cout << "Please Enter have a driver license: ";
    cin >> deiver;
}
void PrintAge(int age, bool deiver) {
    if (age > 21 && deiver == true)
        cout << "Hired." << endl;
    else
        cout << "Rejected." << endl;
}


struct strInfo {
   int age;
   bool HasDriverLicense;
};
strInfo ReadFunction() {
   strInfo info;
   cout << "Please Enter your age. \n";
   cin >> info.age;
   cout << "Do you have a Driver License?\n";
   cin >> info.HasDriverLicense;
   return info;
}
bool IsAccepted(strInfo info) {
   return (info.age > 21 && info.HasDriverLicense);
}
void PrintResult(strInfo info) {
   if (IsAccepted(info))
       cout << "\nHired" << endl;
   else
       cout << "\n Rejected" << endl;
}



int main()
{
    //Problem 4
    int age;
    bool deiver;
    ReadAge(age, deiver);
    PrintAge(age, deiver);

    
}