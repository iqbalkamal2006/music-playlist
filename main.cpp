#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float numGenre, numVibe, numActivity;
    cout << "======================================" << endl;
    cout << "SPOTIFY MUSIC RECOMMENDATION PLAYLIST" << endl;
    cout << "======================================" << endl;
    cout << setw(2) << endl;
    cout << "Welcome listener! Give us your music preferences!" << endl;
    cout << setw(2) << endl;
    cout << "What's your favourite genre?" << endl;
    cout << "Press 1: Pop" << endl;
    cout << "Press 2: Hip Hop" << endl;
    cout << "Press 3: Rock" << endl;
    cout << setw(2) << endl;
    cout << "Enter here: ";
    cin >> numGenre;

    while (numGenre < 1 || numGenre > 3){
        cout << "ERROR: WRONG GENRE NUMBER! Please enter the correct number!" << endl;
        cout << setw(2) << endl;
        cout << "What's your favourite genre?" << endl;
        cout << "Press 1: Pop" << endl;
        cout << "Press 2: Hip Hop" << endl;
        cout << "Press 3: Rock" << endl;
        cout << setw(2) << endl;
        cout << "Enter here: ";
        cin >> numGenre;
    }

    if (numGenre == 1){
        cout << "Let's go with your poppy playlist!"<< endl;
        cout << setw(2) << endl;
        cout << "What's your vibe?" << endl;
        cout << "Press 1: Chill" << endl;
        cout << "Press 2: Hype" << endl;
        cout << "Press 3: Sad" << endl;
        cout << setw(2) << endl;
        cout << "Enter here: ";
        cin >> numVibe;
    }

    if (numGenre == 2){
        cout << "Improve your rap game with your playlist!"<< endl;
        cout << setw(2) << endl;
        cout << "What's your vibe?" << endl;
        cout << "Press 1: Chill" << endl;
        cout << "Press 2: Hype" << endl;
        cout << "Press 3: Sad" << endl;
        cout << setw(2) << endl;
        cout << "Enter here: ";
        cin >> numVibe;
    }

    if (numGenre == 3){
        cout << "Go full rock n roll for your playlist!"<< endl;
        cout << setw(2) << endl;
        cout << "What's your vibe?" << endl;
        cout << "Press 1: Chill" << endl;
        cout << "Press 2: Hype" << endl;
        cout << "Press 3: Sad" << endl;
        cout << setw(2) << endl;
        cout << "Enter here: ";
        cin >> numVibe;
    }

    while (numVibe < 1 || numVibe > 3){
        cout << "ERROR: WRONG VIBE NUMBER! Please enter the correct number!" << endl;
        cout << setw(2) << endl;
        cout << "What's your vibe?" << endl;
        cout << "Press 1: Chill" << endl;
        cout << "Press 2: Hype" << endl;
        cout << "Press 3: Sad" << endl;
        cout << setw(2) << endl;
        cout << "Enter here: ";
        cin >> numVibe;
    }
    
    if (numVibe == 1){
        cout << "What are you doing now or what are you planning later?"<< endl;
        cout << setw(2) << endl;
        cout << "Press 1: Studying" << endl;
        cout << "Press 2: Walking" << endl;
        cout << "Press 3: Driving" << endl;
        cout << setw(2) << endl;
        cout << "Enter here: ";
        cin >> numActivity;
    }

    if (numVibe == 2){
        cout << "What are you doing now or what are you planning later?"<< endl;
        cout << setw(2) << endl;
        cout << "Press 1: Studying" << endl;
        cout << "Press 2: Walking" << endl;
        cout << "Press 3: Driving" << endl;
        cout << setw(2) << endl;
        cout << "Enter here: ";
        cin >> numActivity;
    }

    if (numVibe == 3){
        cout << "What are you doing now or what are you planning later?"<< endl;
        cout << setw(2) << endl;
        cout << "Press 1: Studying" << endl;
        cout << "Press 2: Walking" << endl;
        cout << "Press 3: Driving" << endl;
        cout << setw(2) << endl;
        cout << "Enter here: ";
        cin >> numActivity;
    }

    while (numActivity < 1 || numActivity > 3){
        cout << "ERROR: WRONG ACTIVITY NUMBER! Please enter the correct number!" << endl;
        cout << setw(2) << endl;
        cout << "Press 1: Studying" << endl;
        cout << "Press 2: Walking" << endl;
        cout << "Press 3: Driving" << endl;
        cout << setw(2) << endl;
        cout << "Enter here: ";
        cin >> numActivity;
    }



    return 0;
}