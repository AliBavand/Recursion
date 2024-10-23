#include <iostream>
using namespace std;

int SumOfDigits(int number){
    bool condition = true;
    int tmp = 0;
    while(condition){
        tmp = tmp + number % 10;
        number = number / 10;
        if (number == 0){
            condition = false;
        }
    }
    return tmp;
}

int SumOfDigits_recursion(int number){
    int tmp = 0;
    if(number / 10 == 0){
        return number;
    }
    tmp = number % 10;
    return tmp + SumOfDigits_recursion(number / 10);
}

int main(){
    int Number;
    cout << "Enter The number: ";
    cin >> Number;
    int result = SumOfDigits(Number);
    int result1 = SumOfDigits_recursion(Number);
    cout << "Sum Of Number's Digits is: " << result << endl;
    cout << "Sum Of Number's Digits Using Recursion is: " << result1 << endl;
    return 0;
}