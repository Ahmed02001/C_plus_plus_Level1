#include <iostream>
using namespace std;
//problem #19

void ReadRudis(float& D) {
	cout << "Please Enter diameter.\n";
	cin >> D;
}
float CalcCircleArea(float D) {
	float area;
	area = 3.14 * pow(D, 2) / 4;
	return area;
}
void PrintArea(float area) {
	cout << "the Area of Circle = " << area << endl;
}


int main() {
	
	//problem #19
	float D;
	ReadRudis(D);
	PrintArea(CalcCircleArea(D));

}
