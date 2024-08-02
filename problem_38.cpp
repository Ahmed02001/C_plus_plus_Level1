#include <iostream>
 using namespace std;

 //problem #38

enum enPrimeNotPrime { prime = 1, notPrime = 2 };

float ReadPositiveNumber(string massage) {
   float num;
   do {
       cout << massage << endl;
       cin >> num;

   } while (num <= 0);
   return num;
}

enPrimeNotPrime CheckPrime(int num) {
   int M = round(num / 2);
   for (int count = 2; count <= M; count++) {
       if (num % count == 0)
           return enPrimeNotPrime::notPrime;
   }
   return enPrimeNotPrime::prime;
}

void PrintPrime(int num) {
   switch (CheckPrime(num)) {
   case enPrimeNotPrime::prime:
       cout << "The Number is Prime." << endl;
       break;
   case enPrimeNotPrime::notPrime:
       cout << "The Number is Not Prime." << endl;
       break;
   }
}

int main(){
    //problem #38

    PrintPrime(ReadPositiveNumber("Please Enter The Positive Number?"));
}



    