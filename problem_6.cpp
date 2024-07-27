#include <iostream>
using namespace std;

//Problem 6
struct strFullName {
   string FirstName;
   string MiddleName;
   string LastName;
};
strFullName ReadFullName() {

   strFullName Info;
   cout << "Please Enter The First Name.\n";
   cin >> Info.FirstName;
   cout << "Please Enter The Middle Name.\n";
   cin >> Info.MiddleName;
   cout << "Please Enter The Last Name.\n";
   cin >> Info.LastName;
   return Info;
}
string GetFullName(strFullName Info) {
   string FullName = "";
   FullName = Info.FirstName + " " + Info.MiddleName + " " + Info.LastName;
   return FullName;
}
void PrintFullName(string FullName) {
   cout << "The Full Name Is " << FullName << endl;
}

int main(){
    //ptoblem 6
    PrintFullName(GetFullName(ReadFullName()));
}