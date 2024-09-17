#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int input;
    char redo[1];
    const int min = 1;
    const int max = 10;

    int random = (rand()%(max-min+1))+min;

    while(input != random){
        cout << "Guess a number between " << min << " and " << max << ": ";
        cin >> input;
        if(input == random){
            cout << "\n\nCongratulations!";
            while((redo[0] == 'Y'||redo[0] == 'N') == 0){
                cout << "\nTry again? [Y/N] ";
                cin >> redo[0];
                switch(redo[0]){
                case 'Y':
                    int random = (rand()%(max-min+1))+min;
                    break;

                case 'N':
                    cout << "\n\nThanks for playing!";
                    break;

                default:
                    cout << redo[0] << " is not a valid input.";
                    break;
                }
                cout << "\n\n";
            }
        }
    }

    return 0;
}
