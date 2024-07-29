#include <iostream>
using namespace std;

//problem #20

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


int main()
{
    //problem #20
    PrintArea(CalcArea(ReadL()));

    
}