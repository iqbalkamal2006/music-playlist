#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float numGenre;
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
        
    }

    return 0;
}