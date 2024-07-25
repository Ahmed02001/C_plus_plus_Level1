#include <iostream>
#include <string>
using namespace std;


//Problem 5

struct strInfo {
    int age;
    bool HasDriverLicense;
    bool HasRecommendation;
};


strInfo ReadFunction() {
    strInfo info;
    cout << "Please Enter your age. \n";
    cin >> info.age;
    cout << "Do you have a Driver License?\n";
    cin >> info.HasDriverLicense;
    cout << "Do you have a Driver License?\n";
    cin >> info.HasRecommendation;
    return info;
}


bool IsAccepted(strInfo info) {

    return ((info.age > 21 && info.HasDriverLicense) || info.HasRecommendation);
}


void PrintResult(strInfo info) {
    if (IsAccepted(info))
        cout << "\nHired" << endl;
    else
        cout << "\n Rejected" << endl;
}



int main()
{
   
    //Problem 5
    PrintResult(ReadFunction());
}