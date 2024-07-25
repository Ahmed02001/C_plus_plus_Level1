#include <iostream>
#include <string>
using namespace std;


//Pronlem 2
string ReadName() {
    string str;
    cout << "Please Enter Your Name :\n";
    getline(cin, str);
    return str;
}
void PrintName() {
    cout << "Your Name is " << ReadName() << endl;
}


int main()
{

    //Problem 2
    PrintName();

   
}