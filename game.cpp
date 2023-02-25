#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // set random seed
    srand(time(NULL));
    
    // initialize variables
    int player_score = 0;
    int computer_score = 0;
    int rounds = 1;
    
    // main game loop
    while (rounds <= 5) {
        // get player's choice
        cout << "Round " << rounds << ": Choose rock (r), paper (p), or scissors (s): ";
        char player_choice;
        cin >> player_choice;
        
        // generate computer's choice
        char computer_choice;
        int rand_num = rand() % 3;
        if (rand_num == 0) {
            computer_choice = 'r';
            cout << "Computer chooses rock." << endl;
        } else if (rand_num == 1) {
            computer_choice = 'p';
            cout << "Computer chooses paper." << endl;
        } else {
            computer_choice = 's';
            cout << "Computer chooses scissors." << endl;
        }
        
        // determine winner of round
        if (player_choice == 'r' && computer_choice == 's') {
            cout << "You win!" << endl;
            player_score++;
        } else if (player_choice == 'p' && computer_choice == 'r') {
            cout << "You win!" << endl;
            player_score++;
        } else if (player_choice == 's' && computer_choice == 'p') {
            cout << "You win!" << endl;
            player_score++;
        } else if (player_choice == computer_choice) {
            cout << "It's a tie!" << endl;
        } else {
            cout << "Computer wins!" << endl;
            computer_score++;
        }
        
        // increment round number
        rounds++;
    }
    
    // print final scores
    cout << "Final score: You - " << player_score << ", Computer - " << computer_score << endl;
    
    return 0;
}
