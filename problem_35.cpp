#include <iostream>
using namespace std;

//problem #35

struct stPiggyBankContent {
    int pennies, nicles, dimes, quaters, dollars;
};
stPiggyBankContent ReadPiggyBankcontent() {
    stPiggyBankContent PiggyBankContent;

    cout << "Please Enter the Money of Pennies?\n";
    cin >> PiggyBankContent.pennies;
    cout << "Please Enter the Money of Nicles?\n";
    cin >> PiggyBankContent.nicles;
    cout << "Please Enter the Money of Dimes?\n";
    cin >> PiggyBankContent.dimes;
    cout << "Please Enter the Money of Quarter?\n";
    cin >> PiggyBankContent.quaters;
    cout << "Please Enter the Money of Dollars?\n";
    cin >> PiggyBankContent.dollars;
    return PiggyBankContent;
}
int CalculatePiggyBankContent(stPiggyBankContent PiggyBankContent) {
    int TotalPennies = 0;
    TotalPennies = PiggyBankContent.pennies + PiggyBankContent.nicles * 5 + PiggyBankContent.dimes * 10 + PiggyBankContent.quaters * 25 + PiggyBankContent.dollars * 100;
    return TotalPennies;
}

int main(){
    //problem #35
    int Total_pennies = CalculatePiggyBankContent(ReadPiggyBankcontent());
    cout << "The Total Money Of Pennies = " << Total_pennies << endl;
    cout << "The Total Money Of Dollars = " << (float)Total_pennies / 100 << endl;

    return 0;
}