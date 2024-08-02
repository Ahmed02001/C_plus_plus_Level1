#include <iostream>
using namespace std;
//problem #34

float ReadPersentage() {
   float grade;
   cout << "Please Enter The Persentage.\n";
   cin >> grade;
   return grade;
}
float Calcpersentage(float grade) {
   if (grade > 1000000)
       return grade * 0.01;
   else if (grade > 500000)
       return grade * 0.02;
   else if (grade > 100000)
       return grade * 0.03;
   else if (grade > 50000)
       return grade * 0.05;
   else
       return grade * 0;
}

int main(){
    //problem #34
    cout << "the Result is " << Calcpersentage(ReadPersentage()) << endl;
}
    
