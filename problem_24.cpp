#include <iostream>
using namespace std;

//problem #21

float ReadL() {
   float L;
   cout << "Please enter L: ";
   cin >> L;
   return L;
}
float CalcArea(float num) {
   return pow(num, 2) / (4 * 3.14);
}
void PrintArea(float Area) {
   cout << "The Area is " << Area << endl;
}
//problem #25

int ReadAge() {
    int Age;
    cout << "Please enter L: ";
    cin >> Age;
    return Age;
}
bool ValidateNumberOfRange(int number, int from, int to) {
    return (number >= from && number <= to);
}
int ReadUntilAgeBetween(int from, int to) {
    int age = 0;
    do {
        age = ReadAge();

    } while (!ValidateNumberOfRange(age, from, to));
    return age;
}
void PrintAge(int age) {
    if (ValidateNumberOfRange(age, 18, 45)) {
        cout << "Is a valide Age.\n";
    }
    else
        cout << "Is not a valide age.\n";
}


int main()
{
    

    //problem #24
    PrintAge(ReadUntilAgeBetween(18, 45));
}