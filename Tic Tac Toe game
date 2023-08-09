#include <iostream>
#include<Stdlib.h>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char currentPlayer = 'X';

void Board() {
    cout<<"_____________" << endl;
    for (int row = 0; row < 3; ++row) {
        cout << "| ";
        for (int col = 0; col < 3; ++col) {
            cout << board[row][col] << " | ";
        }
        cout << endl;
        cout << "_____________" << endl;
    }
}

bool isBoardFull() {
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            if (board[row][col] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool hasWon(char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool isValidMove(int row, int col) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        return true;
    }
    return false;
}

void makeMove(int row, int col, char player) {
    if (isValidMove(row, col)) {
        board[row][col] = player;
    }
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    int row, col;
    system("color 56");	

    cout<<"\t\t|___________________________________|\n";
    cout<<"\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
	cout<<"\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
	cout<<endl;
	cout<<"\t\t|Welcome To The Tic Tac Toe Game    |";
	cout<<endl;
	cout<<"`\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
	cout<<"\t\t|Made By Kunal sharma               |\n";
	cout<<"\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
	cout<<endl;
	cout<<"\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
	
	cout<<endl;
	cout<<"\t\t|___________________________________|";
	cout<<endl<<endl;
	cout<<endl;

    while (true) {
        Board();

        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (isValidMove(row, col)) {
            makeMove(row, col, currentPlayer);
            if (hasWon(currentPlayer)) {
                Board();
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
            } else if (isBoardFull()) {
                Board();
                cout << "It's a draw!" << endl;
                break;
            }
            switchPlayer();
        } else {
            cout << "Invalid move. Try again!" << endl;
        }
    }

    return 0;
}




