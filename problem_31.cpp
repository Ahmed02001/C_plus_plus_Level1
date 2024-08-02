#include <iostream>
using namespace std;

//problem #31

int ReadNumber() {
   int num;
   cout << "Please Enter a Number.\n";
   cin >> num;
   return num;
}
void Power_2_3_4(int number) {
   int po_2 = number * number;
   int po_3 = number * number * number;
   int po_4 = number * number * number * number;
   cout << "number of power 2 = " << po_2 << "\nnumber of power 3 = " << po_3 << "\nnumber of power 4 = " << po_4 << endl;
}

int main()
{
    //problem #31
    Power_2_3_4(ReadNumber());
}