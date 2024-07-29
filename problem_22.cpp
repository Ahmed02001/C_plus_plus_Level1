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
//problem #22

void ReadArbitraryTriangle(float& A, float& B,float &C) {
   cout << "Please Enter A.\n";
   cin >> A;
   cout << "Please Enter B.\n";
   cin >> B;
   cout << "Please Enter C.\n";
   cin >> C;
}
float CalculateAreaByArbitraryTriangle(float A, float B, float C) {
   const float PI = 3.14159;
   float P, Area;
   P = (A + B + C) / 2;
   Area = PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);
   return Area;
}
void PrintAreaByArbitraryTriangle(float area) {
   cout << "the Area using ArbitraryTriangle = " << area << endl;
}


int main()
{
    
    //problem #22

    float a, b, c;
    ReadArbitraryTriangle(a, b, c);
    PrintAreaByArbitraryTriangle(CalculateAreaByArbitraryTriangle(a, b, c));*/

    
}