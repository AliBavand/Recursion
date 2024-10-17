#include <iostream>
using namespace std;

int Fibonacci(int stage){
    if(stage == 1){
        return 0;
    }
    else if (stage == 2 || stage == 3)
    {
        return 1;
    }
    else{
        return Fibonacci(stage - 1) + Fibonacci(stage - 2);
    }
}

int main(){
    cout << "Enter Nth Stage Of Fibonacci Number: ";
    int stage;
    cin >> stage;
    int result = Fibonacci(stage);
    cout << "N-th Fibonacci Number Is: "<< result<< endl;
    return 0;
}
