//problem #15

void Read2Numbers(int& num1, int& num2) {
    cout << "Please Enter Number One?\n";
    cin >> num1;
    cout << "Please Enter Number Two?\n";
    cin >> num2;
}
int CalcArea(int num1, int num2) {
    return (num1 * num2);
}
void PrintArea(int area) {

    cout << "The Area is " << area << endl;
}
int main()
{
    

    //problem #15
    int num1, num2;
    Read2Numbers(num1, num2);
    PrintArea(CalcArea(num1, num2));
}