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
//problem #21

void ReadIsoscelesTriangle(float& A, float& B) {
   cout << "Please Enter A.\n";
   cin >> A;
   cout << "Please Enter B.\n";
   cin >> B;
}
float CalculateAreaByIsoscelesTriangle(float A, float B) {
   float Area;
   Area = 3.14 * pow(B, 2) / 4 * ((2 * A - B) / (2 * A + B));
   return Area;
}
void PrintAreaByIsoscelesTriangle(float area) {
   cout << "the Area using Isosceles = " << area << endl;
}


int main()
{
    

    //problem #21
    float a, b;
    ReadIsoscelesTriangle(a, b);
    PrintAreaByIsoscelesTriangle(CalculateAreaByIsoscelesTriangle(a, b));*/

    
}