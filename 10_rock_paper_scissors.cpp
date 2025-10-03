#include<iostream>
using namespace std;

enum choices{rock, paper, scissors};
void display_rules();
bool valid_selection(char selection);
choices retrieve_play(char selection);
void convertEnum(choices choice);
choices winning_choice(choices p1, choices p2);
void game_result(choices p1, choices p2, int& winner);
void display_results(int gcount, int wcount1, int wcount2);

//////////////////////////////////////////////////////////////
int main(){
    int gamesCount{0}; // total games
    int winCount1{0}; // won by player 1
    int winCount2{0}; // won by player 2

    int gameWinner;
    char response; // players' response to play game

    char choice_p1, choice_p2; 
    choices p1, p2; // players' choices

    display_rules();
    cout<< "press y/Y to play the game: ";
    cin>> response;
    while(response == 'y' || response == 'Y'){
        cout<<"player 1 choice ? ";
        cin>> choice_p1;
        cout<< endl;
        cout<< "player 2 choice ? ";
        cin>> choice_p2;
        cout<< endl;

        if (valid_selection(choice_p1) && valid_selection(choice_p2)){
            p1 = retrieve_play(choice_p1);
            p2 = retrieve_play(choice_p2);
            gamesCount++;
            game_result(p1, p2, gameWinner);
            if (gameWinner == 1){
                winCount1++;
            }
            else if (gameWinner == 2){
                winCount2++;
            }
        cout<< "press y/Y to play the game: ";
        cin>> response;
        }
    }
    display_results(gamesCount, winCount1, winCount2);

    return 0;
}

/////////////////////////////////////////////////
void display_rules()
{
    cout << " Welcome to the game of Rock, Paper, "
    << "and Scissors." << endl;
    cout << " This is a game for two players. For each "
    << "game, each" << endl;
    cout << " player selects one of the objects Rock, "
    << "Paper, or Scissors." << endl;
    cout << " The rules for winning the game are: " << endl;
    cout << "1. If both players select the same object, it "
    << "is a tie." << endl;
    cout << "2. Rock breaks Scissors: So player who selects "
    << "Rock wins." << endl;
    cout << "3. Paper covers Rock: So player who selects "
    << "Paper wins." << endl;
    cout << "4. Scissors cuts Paper: So player who selects "
    << "Scissors wins." << endl << endl;
    cout << "Enter R or r to select Rock, P or p to select "
    << "Paper, and S or s to select Scissors." << endl;
}

bool valid_selection(char selection){
    switch (selection){
        case 'r':
        case 'p':
        case 's':
        case 'R':
        case 'P':
        case 'S':
            return  true;
        default:
            return false;
    }
}

choices retrieve_play(char selection){
    choices choice;
    switch(selection){
        case 'r':
        case 'R':
            choice=rock;
            break;
        case 'p':
        case 'P':
            choice=paper;
            break;
        case 's':
        case 'S':
            choice=scissors;
            break;
    }
    return choice;
}
void convertEnum(choices choice){
    switch(choice){
        case rock:
            cout<< "rock"<< endl;
            break;
        case paper: 
            cout<< "paper"<< endl;
            break;
        case scissors:
            cout<< "scissors"<< endl;
            break;
    }
}

choices winning_choice(choices p1, choices p2){
    if ((p1 == rock && p2 == scissors) || (p1 == scissors && p2 == rock)){
        return rock;
    }
    else if ((p1 == rock && p2 == paper) || (p1 == paper) && (p2 == rock)){
        return paper;
    }
    else{
        return scissors;
    }
}

void game_result(choices p1, choices p2, int& winner){
    choices winnerChoice;
    if (p1 == p2){
        winner = 0;
        cout<< "game tie";
        convertEnum(p1);
        cout<< "both selected";
    }
    else{
        winnerChoice = winning_choice(p1, p2);
        cout<< "player 1 selected ";
        convertEnum(p1);
        cout<< "player 2 selected ";
        convertEnum(p2);

        if (p1 == winnerChoice) {
            winner = 1;
        }
        else if (p2 == winnerChoice){
            winner = 2;
        }
        cout<< "player "<< winner << " wins the game!"<<endl;
    }
}

void display_results(int gcount, int wcount1, int wcount2){
    cout << "The total number of plays: " << gcount << endl;
    cout << "The number of plays won by player 1: " << wcount1 << endl;
    cout << "The number of plays won by player 2: " << wcount2 << endl;
}