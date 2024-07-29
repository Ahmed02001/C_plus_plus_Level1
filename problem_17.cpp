#include <iostream>
using namespace std;
//problem #17

void ReadTwoParmenters(float& A, float& H) {
	cout << "Please Enter Number One.\n";
	cin >> A;
	cout << "Please Enter Number Two.\n";
	cin >> H;
}
float CalcTringleArea(float A, float H) {
	float area;
	area = 0.5 * A * H;
	return area;
}
void PrintArea(float area) {
	cout << "the Area of Rectangle = " << area << endl;
}


int main() {
	
	//problem #17
	float A, H;
	ReadTwoParmenters(A, H);
	PrintArea(CalcTringleArea(A, H));


}