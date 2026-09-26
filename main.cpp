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
    
    cout << "======================================" << endl;
    cout << "HERE'S YOUR RECOMMENDED PLAYLIST" << endl;
    cout << "======================================" << endl;
    cout << setw(2) << endl;
    cout <<"PLAYLIST : " << endl;

    if(numGenre == 1 && numVibe == 1 && numActivity == 1) {
        cout << "CHILL STUDY POP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"BIRDS OF A FEATHER - Billie Eilish"<< endl;
        cout <<"No One Noticed - The Marias"<< endl;
    }

    if(numGenre == 1 && numVibe == 1 && numActivity == 2) {
        cout << "CHILL WALKING POP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Cruel Summer - Taylor Swift"<< endl;
        cout <<"Snooze - SZA"<< endl;
    }

    if(numGenre == 1 && numVibe == 1 && numActivity == 3) {
        cout << "CHILL DRIVING POP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Die For You - The Weeknd"<< endl;
        cout <<"Heat Waves - Glass Animals"<< endl;
    }

    if(numGenre == 1 && numVibe == 2 && numActivity == 1) {
        cout << "HYPE STUDY POP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Blinding Lights - The Weeknd"<< endl;
        cout <<"Wake Me Up - Avicii"<< endl;
    }
    if(numGenre == 1 && numVibe == 2 && numActivity == 2) {
        cout << "HYPE WALKING POP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Espresso - Sabrina Carpenter"<< endl;
        cout <<"Starships - Nicki Minaj"<< endl;
    }
    if(numGenre == 1 && numVibe == 2 && numActivity == 3) {
        cout << "HYPE DRIVING POP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Starboy - The Weeknd"<< endl;
        cout <<"Don't Start Now - Dua Lipa"<< endl;
    }

    if(numGenre == 1 && numVibe == 3 && numActivity == 1) {
        cout << "SAD STUDY POP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Glimpse of Us - Joji"<< endl;
        cout <<"driver's license - Olivia Rodrigo"<< endl;
    }
    
    if(numGenre == 1 && numVibe == 3 && numActivity == 2) {
        cout << "SAD WALKING POP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Supercut - Lorde"<< endl;
        cout <<"Someone Like You - Adele"<< endl;
    }

    if(numGenre == 1 && numVibe == 3 && numActivity == 3) {
        cout << "SAD DRIVING POP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Summertime Sadness - Lana Del Rey"<< endl;
        cout <<"Save Your Tears - The Weeknd"<< endl;
    }

    if(numGenre == 2 && numVibe == 1 && numActivity == 1) {
        cout << "CHILL STUDY RAP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"PRIDE. - Kendrick Lamar"<< endl;
        cout <<"Reborn - KIDS SEE GHOSTS"<< endl;
    }

    if(numGenre == 2 && numVibe == 1 && numActivity == 2) {
        cout << "CHILL WALKING RAP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Good News - Mac Miller"<< endl;
        cout <<"90210 - Travis Scott"<< endl;
    }

    if(numGenre == 2 && numVibe == 1 && numActivity == 3) {
        cout << "CHILL DRIVING RAP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Location - Playboi Carti"<< endl;
        cout <<"Self Care - Mac Miller"<< endl;
    }

    if(numGenre == 2 && numVibe == 2 && numActivity == 1) {
        cout << "HYPE STUDY RAP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"HUMBLE. - Kendrick Lamar"<< endl;
        cout <<"Ultimate - Denzel Curry"<< endl;
    }
    if(numGenre == 2 && numVibe == 2 && numActivity == 2) {
        cout << "HYPE WALKING RAP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"SICKO MODE - Travis Scott"<< endl;
        cout <<"Ain't It Funny - Danny Brown"<< endl;
    }
    if(numGenre == 2 && numVibe == 2 && numActivity == 3) {
        cout << "HYPE DRIVING RAP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Black Skinhead - Kanye West"<< endl;
        cout <<"dont rely on other men - JPEGMAFIA"<< endl;
    }

    if(numGenre == 2 && numVibe == 3 && numActivity == 1) {
        cout << "SAD STUDY RAP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Lucid Dreams - Juice WRLD"<< endl;
        cout <<"Marvins Room - Drake"<< endl;
    }
    
    if(numGenre == 2 && numVibe == 3 && numActivity == 2) {
        cout << "SAD WALKING RAP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Sad! - XXXTENTACION"<< endl;
        cout <<"Stan - Eminem"<< endl;
    }

    if(numGenre == 2 && numVibe == 3 && numActivity == 3) {
        cout << "SAD DRIVING RAP" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"XO TOUR Llif3 - Lil Uzi Vert"<< endl;
        cout <<"Sing About Me, I'm Dying of Thirst - Kendrick Lamar"<< endl;
    }

    if(numGenre == 3 && numVibe == 1 && numActivity == 1) {
        cout << "CHILL STUDY ROCK" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Weird Fishes/Arpeggi - Radiohead"<< endl;
        cout <<"Breathe (In The Air) - Pink Floyd"<< endl;
    }

    if(numGenre == 3 && numVibe == 1 && numActivity == 2) {
        cout << "CHILL WALKING ROCK" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Fade Into You - Mazzy Star"<< endl;
        cout <<"Island In The Sun - Weezer"<< endl;
    }

    if(numGenre == 3 && numVibe == 1 && numActivity == 3) {
        cout << "CHILL DRIVING ROCK" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Hotel California - Eagles"<< endl;
        cout <<"Fake Plastic Trees - Radiohead"<< endl;
    }

    if(numGenre == 3 && numVibe == 2 && numActivity == 1) {
        cout << "HYPE STUDY ROCK" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Mr. Brightside - The Killers"<< endl;
        cout <<"Song 2 - Blur"<< endl;
    }
    if(numGenre == 3 && numVibe == 2 && numActivity == 2) {
        cout << "HYPE WALKING ROCK" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Seven Nation Army - The White Stripes"<< endl;
        cout <<"Discipline - Nine Inch Nails"<< endl;
    }
    if(numGenre == 3 && numVibe == 2 && numActivity == 3) {
        cout << "HYPE DRIVING ROCK" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Closer - Nine Inch Nails"<< endl;
        cout <<"Don't Stop Me Now - Queen"<< endl;
    }

    if(numGenre == 3 && numVibe == 3 && numActivity == 1) {
        cout << "SAD STUDY ROCK" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Creep - Radiohead"<< endl;
        cout <<"Wish You Were Here - Pink Floyd"<< endl;
    }
    
    if(numGenre == 3 && numVibe == 3 && numActivity == 2) {
        cout << "SAD WALKING ROCK" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"No Surprises - Radiohead"<< endl;
        cout <<"Black - Pearl Jam"<< endl;
    }

    if(numGenre == 3 && numVibe == 3 && numActivity == 3) {
        cout << "SAD DRIVING ROCK" << endl;
        cout << setw(2) << endl;
        cout <<"Suggested Tracks for your Playlist: " << endl;
        cout <<"Everything In Its Right Place - Radiohead"<< endl;
        cout <<"Boulevard of Broken Dreams - Green Day"<< endl;
    }
    return 0;
}