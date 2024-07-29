#include <iostream>
using namespace std;

//problem #16

void ReadTwoParmenters(float& A, float& D) {
	cout << "Please Enter Number One.\n";
	cin >> A;
	cout << "Please Enter Number Two.\n";
	cin >> D;
}
float CalcRectangle(float A, float D) {
	float area;
	area = A * sqrt(D * D - A * A);
	return area;
}
void PrintArea(float area) {
	cout << "the Area of Rectangle = " << area << endl;
}

int main() {
	//problem #16
	float A, B;
	ReadTwoParmenters(A, B);
	PrintArea(CalcRectangle(A, B));

	

}