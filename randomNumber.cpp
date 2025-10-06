#include <bits/stdc++.h>
using namespace std;
// random code generator function
int randomNumber(int x)
{
    if (x == 1)
    {
        int number = rand() % 50 + 1;
        return number;
    }
    else if (x == 2)
    {
        int number = rand() % 100 + 1;
        return number;
    }
    else if (x == 3)
    {
        int number = rand() % 200 + 1;
        return number;
    }
    else
    {
        cout << "ENTER THE VALID NUMBER \n ";
        return -1;
    }
}
// main game body
// main body of  subu
void playGame()
{
    int guess;
    int attempts = 0;
    cout << "FOR PLAYING GAME PRESS 1 \n"
         << endl
         << "FOR EXIT PRESS 0 \n";
    int choice;
    // TAKING THE USER CHOICE
    cin >> choice;
    int level;
    switch (choice)
    {
    case 1:
    {
        // ENTERING THE GAME DIFFICULTY LEVEL
        // TAKING THE CHOICE OF LEVELS
        cout << "enter the difficulity level \n"
             << "EASY enter 1 . number(upto 50)" << endl
             << "MEDIUM enter 2 . number (upto 100)" << endl
             << "HARD enter 3 . number(upto 200) \n";
        // TAKING THE VALUE OF LEVEL
        cin >> level;
        int secretNumber = randomNumber(level);
        switch (level)
        {
        case 1:
            // game for easy levels
            // easy level
            do
            {
                cout << "IN THIS LEVEL YOU HAVE ONLY '5' ATTEMPTS \n";
                cout << "ENTER THE GUESS NUMBER upto(50) \n";
                cin >> guess;
                if (guess > secretNumber)
                {
                    cout << " 😅 your guess is high then the secret number \n ";
                    attempts++;
                    cout << " your attempts are : " << attempts << endl;
                }
                else if (guess < secretNumber)
                {
                    cout << " 😅 your guess is less than the secret number \n";
                    attempts++;
                    cout << " your attempts are : " << attempts << endl;
                }
                else if (guess == secretNumber)
                {
                    cout << " CONGRATULATIONS 🎉 you have passed the game \n";
                    attempts++;
                    cout << " your attempts are : " << attempts << endl;
                }
            } while (guess != secretNumber && attempts < 5);
            if (attempts == 5)
            {
                cout << " 😭 SORRY YOU HAVE EXCEEDED YOUR ATTEMPTS LIMITS THE NUMBER WAS :" << secretNumber << endl;
            }
            break;
        // game for medium levels
        // medium level
        case 2:
            do
            {
                cout << "IN THIS LEVEL YOU HAVE '7' ATTEMPTS \n ";
                cout << "ENTER THE GUESS NUMBER upto(100) \n";
                cin >> guess;
                if (guess > secretNumber)
                {
                    cout << " 😅 your guess is high then the secret number \n";
                    attempts++;
                    cout << " your attempts are : " << attempts << endl;
                }
                else if (guess < secretNumber)
                {
                    cout << " 😅  your guess is less than the secret number \n";
                    attempts++;
                    cout << " your attempts are : " << attempts << endl;
                }
                else if (guess == secretNumber)
                {
                    cout << " CONGRATULATIONS 🎉 you have passed the game \n";
                    attempts++;
                    cout << " your attempts are : " << attempts << endl;
                }
            } while (guess != secretNumber && attempts < 7);
            if (attempts == 7)
            {
                cout << " 😭 SORRY YOU HAVE EXCEEDED YOUR ATTEMPTS LIMITS THE NUMBER WAS :" << secretNumber << endl;
            }
            break;
        // game for hard level
        // hard level
        case 3:
            do
            {
                cout << "IN THIS LEVEL YOU HAVE '10' ATTEMPTS \n ";
                cout << "ENTER THE GUESS NUMBER upto(200) \n";
                cin >> guess;
                if (guess > secretNumber)
                {
                    cout << " 😅 your guess is high then the secret number \n";
                    attempts++;
                    cout << " your attempts are : " << attempts << endl;
                }
                else if (guess < secretNumber)
                {
                    cout << " 😅 your guess is less than the secret number \n";
                    attempts++;
                    cout << " your attempts are : " << attempts << endl;
                }
                else if (guess == secretNumber)
                {
                    cout << " CONGRATULATIONS 🎉you have passed the game \n";
                    attempts++;
                    cout << " your attempts are : " << attempts << endl;
                }
            } while (guess != secretNumber && attempts < 10);
            if (attempts == 10)
            {
                cout << " 😭 SORRY YOU HAVE EXCEEDED YOUR ATTEMPTS LIMITS THE NUMBER WAS :" << secretNumber << endl;
            }
            break;
        default:
            cout << "❌ DEAR ENTER THE VALID CHOICE \n";
        }
        break;
    }
    case 0:
        cout << "YOU ARE EXITING OUT OF GAME BYY 👋😊 \n ";
        break;
    default:
        cout << " ❌ENTER THE VALID NUMBER \n ";
    }
}
int main()
{
    // for taking the user choiice whether he want to play more or not
    char playMore;
    // use of srand to add randomness everytime
    srand(time(0));
    do
    {
        playGame();
        cout << "FOR PLAYING THE GAME NEXT TIME ENTER Y / y \n";
        cout << "IF YOU DONT WANT TO PLAY GAME ENTER THE F / f \n";
        cin >> playMore;
    } while (playMore == 'Y' || playMore == 'y');
    return 0;
}