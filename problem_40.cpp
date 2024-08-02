 #include <iostream>
 using namespace std;

//problem #40

float ReadPositiveNumber(string massage) {
    float num;
    do {
        cout << massage << endl;
        cin >> num;

    } while (num <= 0);
    return num;
}

float TotalBillAfterServiesAndTax(float TotalBill) {
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}

int main(){
    
    //problem #40

    float totalBill = ReadPositiveNumber("enter Positive Number?");
    cout << "the TotalBill After Adding fee and tax = " << TotalBillAfterServiesAndTax(totalBill) << endl;
}