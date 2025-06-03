#include <iostream>

using namespace std;

const char XO[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char xo[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
const char player1 = 'x', player2 = 'o';
string name1, name2;

//get names of players
void players()
{
    cout << "Enter name for player 1: " << endl;
    getline(cin, name1);

    cout << "Enter name for player 2: " << endl;
    getline(cin, name2);
}

void rules()
{
    string ready;
    cout << "First to get 3 in a row wins. Once the board is full " <<
            "and there is no winner the game will result in a tie. " <<
            "\nAfter each game the player who starts switches. " << 
            "\nWhen ready enter 1. Best of luck. " << endl; 
    cin >> ready;
}

void board()
{
    cout << name1 << " is: " << player1 << ". :\t" << name2 <<" is: " << player2 << "." << endl << endl;

    cout << "   |   |   " << endl;
    cout<<" " << xo[0][0] << " | " << xo[0][1] << " | "<< xo[0][2] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout<<" " << xo[1][0] << " | " << xo[1][1] << " | "<< xo[1][2] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout<<" " << xo[2][0] << " | " << xo[2][1] << " | "<< xo[2][2] << " " << endl;
    cout << "   |   |   " << endl;

}

bool winConditionX()
{
    bool win;
    //3 rows
    if (xo[0][0] == 'x' && xo[0][0] == xo[0][1] && xo[0][0] == xo[0][2])
        win = true;
    else if (xo[1][0] == 'x' && xo[1][0] == xo[1][1] && xo[1][0] == xo[1][2])
        win = true;
    else if (xo[2][0] == 'x' && xo[2][0] == xo[2][1] && xo[2][0] == xo[2][2])
        win = true;
    //3 columns
    else if (xo[0][0] == 'x' && xo[0][0] == xo[1][0] && xo[0][0] == xo[2][0])
        win = true;
    else if (xo[0][1] == 'x' && xo[0][1] == xo[1][1] && xo[0][1] == xo[2][1])
        win = true;
    else if (xo[0][2] == 'x' && xo[0][2] == xo[1][2] && xo[0][2] == xo[2][2])
        win = true;
        //2 diagonal
    else if (xo[0][0] == 'x' && xo[0][0] == xo[1][1] && xo[0][0] == xo[2][2])
        win = true;
    else if (xo[2][0] == 'x' && xo[2][0] == xo[1][1] && xo[2][0] == xo[0][2])
        win = true;
    else
        win = false;

    return win;
}

bool winConditionO()
{
    bool win;
    //3 rows
    if (xo[0][0] == 'o' && xo[0][0] == xo[0][1] && xo[0][0] == xo[0][2])
        win = true;
    else if (xo[1][0] == 'o' && xo[1][0] == xo[1][1] && xo[1][0] == xo[1][2])
        win = true;
    else if (xo[2][0] == 'o' && xo[2][0] == xo[2][1] && xo[2][0] == xo[2][2])
        win = true;
    //3 columns
    else if (xo[0][0] == 'o' && xo[0][0] == xo[1][0] && xo[0][0] == xo[2][0])
        win = true;
    else if (xo[0][1] == 'o' && xo[0][1] == xo[1][1] && xo[0][1] == xo[2][1])
        win = true;
    else if (xo[0][2] == 'o' && xo[0][2] == xo[1][2] && xo[0][2] == xo[2][2])
        win = true;
        //2 diagonal
    else if (xo[0][0] == 'o' && xo[0][0] == xo[1][1] && xo[0][0] == xo[2][2])
        win = true;
    else if (xo[2][0] == 'o' && xo[2][0] == xo[1][1] && xo[2][0] == xo[0][2])
        win = true;
    else
        win = false;

    return win;
}

void gamePlay(string Name)
{
    int choice;

    cout << Name << " it is your turn. Make your choice (1-9)" << endl;
    cin >> choice;
    if (choice < 1 || choice > 9)
        {
            cout << "🙅‍♂️" << "Ivalid choice pick again. ";
            cin >> choice;
        }
    if (Name == name1)
    {
        switch (choice)
        {
            case 1 : 
            {
                if (xo[0][0] == 'x' || xo[0][0] == 'o')
                    {
                        cout << "Spot taken." << endl;
                        gamePlay(Name);
                    }
                else
                    xo[0][0] = 'x';
            }
            break;

            case 2 : 
            {
                if (xo[0][1] == 'x' || xo[0][1] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[0][1] = 'x';
            }
            break;

            case 3 : 
            {
                if (xo[0][2] == 'x' || xo[0][2] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[0][2] = 'x';
            }
            break;

            case 4 : 
            {
                if (xo[1][0] == 'x' || xo[1][0] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[1][0] = 'x';
            }
            break;

            case 5 : 
            {
                if (xo[1][1] == 'x' || xo[1][1] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[1][1] = 'x';
            }
            break;

            case 6 : 
            {
                if (xo[1][2] == 'x' || xo[1][2] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[1][2] = 'x';
            }
            break;

            case 7 : 
            {
                if (xo[2][0] == 'x' || xo[2][0] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[2][0] = 'x';
            }
            break;

            case 8 : 
            {
                if (xo[2][1] == 'x' || xo[2][1] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[2][1] = 'x';
            }
            break;

            case 9 : 
            {
                if (xo[2][2] == 'x' || xo[2][2] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[2][2] = 'x';
            }
            break;

            default : 
            break;
        }
    }
    else
    {
        switch (choice)
        {
            case 1 : 
            {
                if (xo[0][0] == 'x' || xo[0][0] == 'o')
                    {
                        cout << "Spot taken." << endl;
                        gamePlay(Name);
                    }
                else
                    xo[0][0] = 'o';
            }
            break;

            case 2 : 
            {
                if (xo[0][1] == 'x' || xo[0][1] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[0][1] = 'o';
            }
            break;

            case 3 : 
            {
                if (xo[0][2] == 'x' || xo[0][2] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[0][2] = 'o';
            }
            break;

            case 4 : 
            {
                if (xo[1][0] == 'x' || xo[1][0] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[1][0] = 'o';
            }
            break;

            case 5 : 
            {
                if (xo[1][1] == 'x' || xo[1][1] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[1][1] = 'o';
            }
            break;

            case 6 : 
            {
                if (xo[1][2] == 'x' || xo[1][2] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[1][2] = 'o';
            }
            break;

            case 7 : 
            {
                if (xo[2][0] == 'x' || xo[2][0] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[2][0] = 'o';
            }
            break;

            case 8 : 
            {
                if (xo[2][1] == 'x' || xo[2][1] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[2][1] = 'o';
            }
            break;

            case 9 : 
            {
                if (xo[2][2] == 'x' || xo[2][2] == 'o')
                {
                    cout << "Spot taken." << endl;
                    gamePlay(Name);
                }
                else
                    xo[2][2] = 'o';
            }
            break;

            default : 
            break;
        }
    }
    
}

int winner(string name)
{
    int playAgain;
    cout << "Congratulations " << name << " you won!" << endl;
    cout << "To player again enter 1 to exit enter 0" << endl;
    cin >> playAgain;

    if (playAgain == 0)
        exit(0);

    return playAgain;
}

int tie()
{
    int playAgain;
    cout << "This game ended in a draw. " << endl;
    cout << "To play again enter 1 to exit enter 0" << endl;
    cin >> playAgain;

    if (playAgain == 0)
        exit(0);
    

    return playAgain;
}

int main()
{
    bool win = false;
    int counter = 0;
    int again = 0;
    players();
    string name = name1;
    rules();
    board();
    while (counter < 9) 
        {
            gamePlay(name);
            counter++;
            board();

            if (name == name1)
            {
                win = winConditionX();
                if (win == true)
                       again = winner(name);
                name = name2;
            }
            else 
            {
                win = winConditionO();
                if (win == true)
                    again = winner(name);
                name = name1;
            }

            if (counter == 9 && win == false)
                again = tie();
            //Reset board and condition
            if (again == 1)
                {
                    counter = 0;
                    for (int row = 0; row < 3; row++)
                    {
                        for (int col = 0; col < 3; col++)
                        {
                            xo[row][col] = XO[row][col];
                        }
                    }
                    board();
                    again = 0;
                }
            
        }




    return 0;
}