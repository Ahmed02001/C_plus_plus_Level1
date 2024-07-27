#include<iostream>
using namespace std;

//problem 10
struct strAverageMarks {
    int Mark1;
    int Mark2;
    int Mark3;
};
strAverageMarks ReadMarks() {

    strAverageMarks Mark;
    cout << "Please Enter Grade One?\n";
    cin >> Mark.Mark1;
    cout << "Please Enter Grade Two?\n";
    cin >> Mark.Mark2;
    cout << "Please Enter Grade Three?\n";
    cin >> Mark.Mark3;
    return Mark;
}
float AverageOfMarks(strAverageMarks Mark) {
    float sum;
    sum = Mark.Mark1 + Mark.Mark2 + Mark.Mark3;
    return sum / 3;
}
void PrintAverageMarks(int Average) {
    cout << "The Average Of Grades = " << Average << endl;
}


int main(){
    //problem 10
    PrintAverageMarks(AverageOfMarks(ReadMarks()));
}