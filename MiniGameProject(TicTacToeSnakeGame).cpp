#include <iostream>

using namespace std;

char board[3][3];
char currentMarker;
int currentPlayer;

// Initializes/Resets the game board with numbers 1-9
void resetBoard() {
    char count = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = count++;
        }
    }
}

// Displays the game board dynamically after every turn
void drawBoard() {
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[2][2] << "\n"; // adjusted indexing
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    cout << "\n";
}

// Places marker on chosen slot if valid
bool placeMarker(int slot) {
    if (slot < 1 || slot > 9) return false;

    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentMarker;
        return true;
    }
    return false;
}

// Checks rows, columns, and diagonals for a winning line
int checkWinner() {
    // Rows and Columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return currentPlayer;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return currentPlayer;
    }

    // Diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return currentPlayer;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return currentPlayer;

    return 0; // No winner yet
}

// Switches turn between Player 1 (X) and Player 2 (O)
void swapPlayerAndMarker() {
    if (currentMarker == 'X') {
        currentMarker = 'O';
        currentPlayer = 2;
    } else {
        currentMarker = 'X';
        currentPlayer = 1;
    }
}

// Manages a single game session
void playGame() {
    resetBoard();
    currentPlayer = 1;
    currentMarker = 'X';

    int winner = 0;
    int totalMoves = 0;

    while (winner == 0 && totalMoves < 9) {
        drawBoard();
        cout << "Player " << currentPlayer << " (" << currentMarker << "), enter slot choice (1-9): ";
        int slot;
        cin >> slot;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a number between 1 and 9.\n";
            continue;
        }

        if (!placeMarker(slot)) {
            cout << "Invalid move! Slot is already occupied or out of range. Try again.\n";
            continue;
        }

        totalMoves++;
        winner = checkWinner();

        if (winner == 0) {
            swapPlayerAndMarker();
        }
    }

    drawBoard();

    if (winner != 0) {
        cout << "🎉 Player " << winner << " wins the game!\n";
    } else {
        cout << "🤝 It's a draw!\n";
    }
}

int main() {
    char playAgain;
    
    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing!\n";
    return 0;
}