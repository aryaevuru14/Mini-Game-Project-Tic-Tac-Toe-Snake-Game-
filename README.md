# 🎮 Tic Tac Toe Mini Game (C++)

A lightweight, interactive console-based implementation of the classic **Tic Tac Toe** game written in standard C++. Built to demonstrate fundamental C++ programming concepts including 2D arrays, conditional logic, dynamic rendering, input sanitization, and game-loop structures.

## ✨ Features

* **Dynamic ASCII Board:** Re-renders the 3x3 game grid dynamically after every move.
* **Two-Player Support:** Turn-based gameplay alternating between Player 1 (`X`) and Player 2 (`O`).
* **Win & Draw Detection:** Evaluates all 8 winning conditions (rows, columns, diagonals) and detects draws when no valid moves remain.
* **Input Validation:** Prevents illegal moves on occupied slots and handles invalid non-numeric user inputs cleanly.
* **Replay Option:** Allows players to reset and start a new match directly from the console.
## 🛠️ Tech Stack & Concepts

* **Language:** C++
* **Compiler:** GCC / G++ (C++11 or higher)
* **Core Concepts:**
  * 2D Arrays (`board[3][3]`)
  * Control Structures (`while`, `do-while`, `if-else`)
  * Stream Sanitization (`cin.clear()`, `cin.ignore()`)
  * Modular Functions
## 🚀 Getting Started

### Prerequisites

Ensure you have a C++ compiler installed on your system (such as MinGW for Windows or GCC for Linux/macOS).

### Installation & Execution

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/aryaevuru14/Mini-Game-Project-Tic-Tac-Toe-Snake-Game-.git](https://github.com/aryaevuru14/Mini-Game-Project-Tic-Tac-Toe-Snake-Game-.git)
   cd Mini-Game-Project-Tic-Tac-Toe-Snake-Game-
2. **Compile the program:**
```bash
g++ MiniGameProject(TicTacToeSnakeGame).cpp -o tictactoe
3. **Run the game:**
* **Windows:**
```cmd
.\tictactoe.exe
* **Linux / macOS:**
```bash
./tictactoe
## 🎯 How to Play

1. The game displays a 3x3 grid with slots numbered **1 to 9**:
```text
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

2. Player 1 (`X`) enters a number (1-9) to claim a position.
3. Player 2 (`O`) selects an available slot on their turn.
4. The first player to align 3 markers horizontally, vertically, or diagonally wins!
5. Choose `y` when prompted at the end to play another round.
