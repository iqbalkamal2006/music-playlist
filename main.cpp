#include <iostream>
#include <iomanip>
using namespace std;

// genreMenu function
// Displays the genre menu (Pop, Hip Hop, Rock) for the user to choose from
void genreMenu()
{
    cout << "What's your favourite genre?" << endl;
    cout << "Press 1: Pop" << endl;
    cout << "Press 2: Hip Hop" << endl;
    cout << "Press 3: Rock" << endl;
    cout << setw(2) << endl;
}

// vibeMenu function
// Displays the vibe menu (Chill, Hype, Sad) for the user to choose from
void vibeMenu()
{
    cout << "What's your vibe?" << endl;
    cout << "Press 1: Chill" << endl;
    cout << "Press 2: Hype" << endl;
    cout << "Press 3: Sad" << endl;
    cout << setw(2) << endl;
}

// activityMenu function
// Displays the activity menu (Studying, Walking, Driving) for the user to choose from
void activityMenu()
{
    cout << "What are you doing now or what are you planning later?"<< endl;
    cout << setw(2) << endl;
    cout << "Press 1: Studying" << endl;
    cout << "Press 2: Walking" << endl;
    cout << "Press 3: Driving" << endl;
    cout << setw(2) << endl;
}

// recommendation function
// Prints the recommended playlist and tracks based on the user's genre, vibe and activity choices
// numGenre: 1 = Pop, 2 = Hip Hop, 3 = Rock
// numVibe: 1 = Chill, 2 = Hype, 3 = Sad
// numActivity: 1 = Studying, 2 = Walking, 3 = Driving
void recommendation(float numGenre, float numVibe, float numActivity)
{
    cout << "======================================" << endl;
    cout << "HERE'S YOUR RECOMMENDED SONGS" << endl;
    cout << "======================================" << endl;
    cout << endl;
    cout << "PLAYLIST:" << endl;

    // POP (numGenre == 1)
    // Each condition below matches one vibe + activity combination for Pop
    // Chill Study Pop
    if (numGenre == 1 && numVibe == 1 && numActivity == 1)
    {
        cout << "Let's go POPPY with your playlist!" << endl;
        cout << "CHILL STUDY POP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "BIRDS OF A FEATHER - Billie Eilish" << endl;
        cout << "No One Noticed - The Marias" << endl;
    }

    // Chill Walking Pop    
    else if (numGenre == 1 && numVibe == 1 && numActivity == 2)
    {
        cout << "Let's go POPPY with your playlist!" << endl;
        cout << "CHILL WALKING POP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Cruel Summer - Taylor Swift" << endl;
        cout << "Snooze - SZA" << endl;
    }

     // Chill Driving Pop   
    else if (numGenre == 1 && numVibe == 1 && numActivity == 3)
    {
        cout << "Let's go POPPY with your playlist!" << endl;
        cout << "CHILL DRIVING POP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Die For You - The Weeknd" << endl;
        cout << "Heat Waves - Glass Animals" << endl;
    }

    // Hype Study Pop
    else if (numGenre == 1 && numVibe == 2 && numActivity == 1)
    {
        cout << "Let's go POPPY with your playlist!" << endl;
        cout << "HYPE STUDY POP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Blinding Lights - The Weeknd" << endl;
        cout << "Wake Me Up - Avicii" << endl;
    }

     // Hype Walking Pop   
    else if (numGenre == 1 && numVibe == 2 && numActivity == 2)
    {
        cout << "Let's go POPPY with your playlist!" << endl;
        cout << "HYPE WALKING POP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Espresso - Sabrina Carpenter" << endl;
        cout << "Starships - Nicki Minaj" << endl;
    }

    // Hype Driving Pop
    else if (numGenre == 1 && numVibe == 2 && numActivity == 3)
    {
        cout << "Let's go POPPY with your playlist!" << endl;
        cout << "HYPE DRIVING POP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Starboy - The Weeknd" << endl;
        cout << "Don't Start Now - Dua Lipa" << endl;
    }

    // Sad Study Pop
    else if (numGenre == 1 && numVibe == 3 && numActivity == 1)
    {
        cout << "Let's go POPPY with your playlist!" << endl;
        cout << "SAD STUDY POP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Glimpse of Us - Joji" << endl;
        cout << "driver's license - Olivia Rodrigo" << endl;
    }

    // Sad Walking Pop    
    else if (numGenre == 1 && numVibe == 3 && numActivity == 2)
    {
        cout << "Let's go POPPY with your playlist!" << endl;
        cout << "SAD WALKING POP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Supercut - Lorde" << endl;
        cout << "Someone Like You - Adele" << endl;
    }

    // Sad Walking Pop    
    else if (numGenre == 1 && numVibe == 3 && numActivity == 3)
    {
        cout << "Let's go POPPY with your playlist!" << endl;
        cout << "SAD DRIVING POP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Summertime Sadness - Lana Del Rey" << endl;
        cout << "Save Your Tears - The Weeknd" << endl;
    }

    // RAP (numGenre == 2)
    // Each condition below matches one vibe + activity combination for Rap
    // Chill Study Rap
    else if (numGenre == 2 && numVibe == 1 && numActivity == 1)
    {
        cout << "Improve your RAP game with your playlist!"<< endl;
        cout << "CHILL STUDY RAP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "PRIDE. - Kendrick Lamar" << endl;
        cout << "Reborn - KIDS SEE GHOSTS" << endl;
    }

    // Chill Walking Rap    
    else if (numGenre == 2 && numVibe == 1 && numActivity == 2)
    {
        cout << "Improve your RAP game with your playlist!"<< endl;
        cout << "CHILL WALKING RAP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Good News - Mac Miller" << endl;
        cout << "90210 - Travis Scott" << endl;
    }
    // Chill Driving Rap
    else if (numGenre == 2 && numVibe == 1 && numActivity == 3)
    {
        cout << "Improve your RAP game with your playlist!"<< endl;
        cout << "CHILL DRIVING RAP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Location - Playboi Carti" << endl;
        cout << "Self Care - Mac Miller" << endl;
    }

    // HYPE STUDY RAP    
    else if (numGenre == 2 && numVibe == 2 && numActivity == 1)
    {
        cout << "Improve your RAP game with your playlist!"<< endl;
        cout << "HYPE STUDY RAP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "HUMBLE. - Kendrick Lamar" << endl;
        cout << "Ultimate - Denzel Curry" << endl;
    }

    // HYPE WALKING RAP    
    else if (numGenre == 2 && numVibe == 2 && numActivity == 2)
    {
        cout << "Improve your RAP game with your playlist!"<< endl;
        cout << "HYPE WALKING RAP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "SICKO MODE - Travis Scott" << endl;
        cout << "Ain't It Funny - Danny Brown" << endl;
    }

    // HYPE DRIVING RAP    
    else if (numGenre == 2 && numVibe == 2 && numActivity == 3)
    {
        cout << "Improve your RAP game with your playlist!"<< endl;
        cout << "HYPE DRIVING RAP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Black Skinhead - Kanye West" << endl;
        cout << "dont rely on other men - JPEGMAFIA" << endl;
    }

     // SAD STUDY RAP        
    else if (numGenre == 2 && numVibe == 3 && numActivity == 1)
    {
        cout << "Improve your RAP game with your playlist!"<< endl;
        cout << "SAD STUDY RAP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Lucid Dreams - Juice WRLD" << endl;
        cout << "Marvins Room - Drake" << endl;
    }

    // SAD WALKING RAP    
    else if (numGenre == 2 && numVibe == 3 && numActivity == 2)
    {
        cout << "Improve your RAP game with your playlist!"<< endl;
        cout << "SAD WALKING RAP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Sad! - XXXTENTACION" << endl;
        cout << "Stan - Eminem" << endl;
    }

    // SAD DRIVING RAP    
    else if (numGenre == 2 && numVibe == 3 && numActivity == 3)
    {
        cout << "Improve your RAP game with your playlist!"<< endl;
        cout << "SAD DRIVING RAP" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "XO TOUR Llif3 - Lil Uzi Vert" << endl;
        cout << "Sing About Me, I'm Dying of Thirst - Kendrick Lamar" << endl;
    }

     // ROCK (numGenre == 3)
    // Each condition below matches one vibe + activity combination for Rock   
    // CHILL STUDY ROCK    
    else if (numGenre == 3 && numVibe == 1 && numActivity == 1)
    {
        cout << "Go full ROCK N ROLL for your playlist!"<< endl;
        cout << "CHILL STUDY ROCK" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Weird Fishes/Arpeggi - Radiohead" << endl;
        cout << "Breathe (In The Air) - Pink Floyd" << endl;
    }

    // CHILL WALKING ROCK   
    else if (numGenre == 3 && numVibe == 1 && numActivity == 2)
    {
        cout << "Go full ROCK N ROLL for your playlist!"<< endl;
        cout << "CHILL WALKING ROCK" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Fade Into You - Mazzy Star" << endl;
        cout << "Island In The Sun - Weezer" << endl;
    }

     // CHILL DRIVING ROCK   
    else if (numGenre == 3 && numVibe == 1 && numActivity == 3)
    {
        cout << "Go full ROCK N ROLL for your playlist!"<< endl;
        cout << "CHILL DRIVING ROCK" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Hotel California - Eagles" << endl;
        cout << "Fake Plastic Trees - Radiohead" << endl;
    }
        
    // HYPE STUDY ROCK
    else if (numGenre == 3 && numVibe == 2 && numActivity == 1)
    {
        cout << "Go full ROCK N ROLL for your playlist!"<< endl;
        cout << "HYPE STUDY ROCK" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Mr. Brightside - The Killers" << endl;
        cout << "Song 2 - Blur" << endl;
    }

    // HYPE WALKING ROCK    
    else if (numGenre == 3 && numVibe == 2 && numActivity == 2)
    {
        cout << "Go full ROCK N ROLL for your playlist!"<< endl;
        cout << "HYPE WALKING ROCK" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Seven Nation Army - The White Stripes" << endl;
        cout << "Discipline - Nine Inch Nails" << endl;
    }

    // HYPE DRIVING ROCK    
    else if (numGenre == 3 && numVibe == 2 && numActivity == 3)
    {
        cout << "Go full ROCK N ROLL for your playlist!"<< endl;
        cout << "HYPE DRIVING ROCK" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Closer - Nine Inch Nails" << endl;
        cout << "Don't Stop Me Now - Queen" << endl;
    }

    // SAD STUDY ROCK     
    else if (numGenre == 3 && numVibe == 3 && numActivity == 1)
    {
        cout << "Go full ROCK N ROLL for your playlist!"<< endl;
        cout << "SAD STUDY ROCK" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Creep - Radiohead" << endl;
        cout << "Wish You Were Here - Pink Floyd" << endl;
    }

    // SAD WALKING ROCK     
    else if (numGenre == 3 && numVibe == 3 && numActivity == 2)
    {
        cout << "Go full ROCK N ROLL for your playlist!"<< endl;
        cout << "SAD WALKING ROCK" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "No Surprises - Radiohead" << endl;
        cout << "Black - Pearl Jam" << endl;
    }

    // SAD DRIVING ROCK     
    else if (numGenre == 3 && numVibe == 3 && numActivity == 3)
    {
        cout << "Go full ROCK N ROLL for your playlist!"<< endl;
        cout << "SAD DRIVING ROCK" << endl;
        cout << endl;
        cout << "Suggested Tracks:" << endl;
        cout << "Everything In Its Right Place - Radiohead" << endl;
        cout << "Boulevard of Broken Dreams - Green Day" << endl;
    }
    // Appreciation message
    cout << endl;
    cout << "ENJOY YOUR MUSIC!!!" << endl;
}

// Main function
int main()
{
    // Variable assignment
    float numGenre, numVibe, numActivity;

    // Main menu
    cout << "======================================" << endl;
    cout << "MUSIC STREAMING RECOMMENDATION ASSISTANT" << endl;
    cout << "======================================" << endl;
    cout << endl;

    cout << "Welcome listener! Give us your music preferences!" << endl;
    cout << endl;

    
    // Calling genreMenu function and input validation
    genreMenu();
    cout << "Enter here: ";
    cin >> numGenre;


    while (numGenre < 1 || numGenre > 3)
    {
        cout << "ERROR: WRONG GENRE NUMBER! Please enter the correct number!" << endl;
        genreMenu();
        cout << "Enter here: ";
        cin >> numGenre;
    }

    // Calling vibeMenu function and input validation
    vibeMenu();
    cout << "Enter here: ";
    cin >> numVibe;

    while (numVibe < 1 || numVibe > 3)
    {
        cout << "ERROR: WRONG VIBE NUMBER! Please enter the correct number!" << endl;
        vibeMenu();
        cout << "Enter here: ";
        cin >> numVibe;
    }

    // Calling activityMenu function and input validation
    activityMenu();
    cout << "Enter here: ";
    cin >> numActivity;

    
    while (numActivity < 1 || numActivity > 3)
    {
        cout << "ERROR: WRONG ACTIVITY NUMBER! Please enter the correct number!" << endl;
        activityMenu();
        cout << "Enter here: ";
        cin >> numActivity;
    }

    // Calling recommendation function
    recommendation(numGenre, numVibe, numActivity);

    // Thank you message
    cout << "Thank you for using the Music Recommendation Assistant!"<< endl;

    return 0;
}
