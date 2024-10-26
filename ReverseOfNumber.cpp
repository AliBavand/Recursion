#include <iostream>
using namespace std;

int SumOfDigits_recursion(int number, int reverse){
    if(number / 10 == 0){
        return number + reverse * 10;
    }
    reverse = (number % 10) + reverse * 10;
    return SumOfDigits_recursion(number / 10, reverse);
}


int main(){
    int Number;
    int reverse = 0;
    cout << "Enter The number: ";
    cin >> Number;
    int result = SumOfDigits_recursion(Number, reverse);
    cout << "Reverse Of Number Is: " << result << endl;
    return 0;
}