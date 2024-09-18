#include <iostream>

using namespace std;

int main(){
    int input,average = 0,i=0;

    cout << "Enter a list of temperatures seperated by spaces and end it with any character: ";
    while(cin >> input){
        average += input;
        i++;
    }
    average /= i;

    cout << "\n\nThe average temperature is: " << average << " degrees.";

    return 0;
}
