#include <iostream>
using namespace std;
//problem 11

enum enMarks { Pass = 1, fail = 2 };
struct strMarks {
    int Mark1;
    int Mark2;
    int Mark3;
};
strMarks ReadMarks() {
    strMarks Mark;
    cout << "Please Enter Grade One?\n";
    cin >> Mark.Mark1;
    cout << "Please Enter Grade Two?\n";
    cin >> Mark.Mark2;
    cout << "Please Enter Grade Three?\n";
    cin >> Mark.Mark3;
    return Mark;
}
float CalcAverage(strMarks Mark) {
    float sum = Mark.Mark1 + Mark.Mark2 + Mark.Mark3;
    return sum / 3;
}
enMarks CheckMarks(float sum) {
    if (sum >= 50 )
        return enMarks::Pass;
    else
        return enMarks::fail;
}
void PrintMarks(enMarks mark) {
    if (mark == enMarks::Pass)
        cout << "congratolation, you're passed." << endl;
    else
        cout << "Sorry, you're failed." << endl;
}


int main()
{
    //problem 11
    PrintMarks(CheckMarks(CalcAverage(ReadMarks())));

    
}