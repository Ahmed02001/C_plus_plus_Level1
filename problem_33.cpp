#include <iostream>
using namespace std;

//problem #33

enum enGrades { A = 1, B = 2, C = 3, D = 4, E = 5, F = 6 };
float ReadGrade() {
   float grade;
   cout << "Please Enter The Grade.\n";
   cin >> grade;
   return grade;
}
enGrades CalcGrades(float grade) {
   if (grade > 90 && grade <= 100)
       return enGrades::A;
   else if (grade > 80 && grade <= 90)
       return enGrades::B;
   else if (grade > 70 && grade <= 80)
       return enGrades::C;
   else if (grade > 60 && grade <= 70)
       return enGrades::D;
   else if (grade > 50 && grade <= 60)
       return enGrades::E;
   else
       return enGrades::F;
}
void PrintGrades(enGrades grade) {
   
   if (grade == enGrades::A)
       cout << "the Grade is A.\n";
   else if (grade == enGrades::B)
       cout << "the Grade is B.\n";
   else if (grade == enGrades::C)
       cout << "the Grade is C.\n";
   else if (grade == enGrades::D)
       cout << "the Grade is D.\n";
   else if (grade == enGrades::E)
       cout << "the Grade is E.\n";
   else
       cout << "the Grade  is F.\n";
}

int main(){
    //problem #33
    PrintGrades(CalcGrades(ReadGrade()));
}
    
    