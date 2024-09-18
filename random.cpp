#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int input,min,max,guesses = 0;
    string affirmations[] = {"\nKeep going!\n", "\nYou're getting there!\n", "\nNice guess!\n", "\nDon't give up now!\n"};
    char redo[1];

    cout << "Enter the range for the random number (min max): ";
    cin >> min >> max;

    int random = (rand()%(max-min+1))+min;

    while(input != random){
        guesses++;

        cout << "\nGuess a number between " << min << " and " << max << ": ";
        cin >> input;

        if(input == random){
            cout << "\nCongratulations! You got the nuber in " << guesses << " guesses!";
        }else{
            switch((rand()%4)+1){
                case 1:
                    break;

                case 2:
                    if(input < random){
                        cout << "\nPsst! Try guessing higher!\n";
                    }else{
                        cout << "\nMaybe try guessing a bit lower!\n";
                    }
                    break;

                default:
                    cout << affirmations[(rand()%4)];
                    break;
            }
        }
    }

    return 0;
}