#include <iostream>
using namespace std;

char board[28];

void greetAndInstruct();
void displayBoard(char board[]);
bool checkIfLegal(int cellNbre, char board[]);
bool checkWinner(char board[]);
void computerMove(char board[]);

int main()
{
    char response;
    char move;
    int pMove;

    for(int i=1;i<=27;i++){
        board[i]=i;
    }

    std::cin >> response;
    if(response == 'y'){
        while(!checkWinner(board)){
            std::cin >> move;
            pMove = move - '0';
            bool isLegal = checkIfLegal(pMove, board);
        }
    }
    else{
        std::cout << "You just missed out on the game of your life." << std::endl;
    }
    return 0;
}