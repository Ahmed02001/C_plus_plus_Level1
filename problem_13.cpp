//problem 13

void ReadNumbers(int &num1, int &num2, int &num3) {
    cout << "Please Enter Number One?\n";
    cin >> num1;
    cout << "Please Enter Number Two?\n";
    cin >> num2;
    cout << "Please Enter Number Three?\n";
    cin >> num3;
}
int CompareNumbers(int num1, int num2, int num3) {
    if ((num1 > num2) && (num1 > num3))
        return num1;
    else if ((num2 > num1) && (num2 > num3))
        return num2;
    else
        return num3;
}
void PrintNumbers(int num1, int num2, int num3) {
    if ((num1 > num2) && (num1 > num3))
        cout << CompareNumbers(num1,num2, num3) << " the bigger than " << num2 << " and " << num3 << endl;
    else if ((num2 > num1) && (num2 > num3))
        cout << CompareNumbers(num1, num2, num3) << " the bigger than " << num1 << " and " << num3 << endl;
    else 
        cout << CompareNumbers(num1, num2, num3) << " the bigger than " << num1 << " and " << num2 << endl;
}


int main()
{
    

    //problem 13
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintNumbers(num1,num2, num3);

    
}