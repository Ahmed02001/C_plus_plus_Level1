 
 #include <iostream>
 using namespace std;
 //problem #37

float ReadNumber(string massage) {
   cout << massage << endl;
   float number=0;
   cin >> number;
   return number;
}
int SumNumbes() {
   int sum = 0, number = 0, counter = 1;
   do {
       number = ReadNumber("Please Enter Number " + to_string(counter));
       if (number == -99) {
           break;
       }
       sum += number;
       counter++;
   } while (number != -99);
   return sum;
}

int main(){
     //problem #37

    cout << "the Result = " << SumNumbes() << endl;

    
}


