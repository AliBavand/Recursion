#include <iostream>
using namespace std;

int Factorial(int number){
    if(number == 0){
        return 1;
    }
    return number * Factorial(number - 1);
}

int main(){
    cout << "Enter The Input: ";
    int number;
    cin >> number;
    int result = Factorial(number);
    cout << number << "! = "<< result << endl;
}