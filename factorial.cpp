#include <iostream>

using namespace std;

int factorialRecursive(int n){
    if(n==1){return 1;}
    return n*factorialRecursive(n-1);
}

int factorialForLoop(int n){
    int factorial = 1;
    for(int i = n; i > 1; i--){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int input;
    while(input < 1){
        cout << "Enter a positive integer: ";
        cin >> input;
        if(input < 1){
            cout << "\n\n" << input << " is not a valid number.\n\n";
        }
    }

    cout << "\n\nThe factorial of " << input << " is " << factorialRecursive(input);

    return 0;
}
