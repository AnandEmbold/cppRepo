#include <iostream>
#include <string>
#include <vector>
using namespace std;

string player1, player2;
int t_p1 = 1, t_p2 = 0;
bool is_finished = false;
int position;
string currentPlayer;
string winner;

vector<string> board = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

void drawBoard(void) {
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t  " << board[0] << "  |  " << board[1] << "  |  " << board[2]
       << "  " << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t----------------" << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t  " << board[3] << "  |  " << board[4] << "  |  " << board[5]
       << "  " << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t----------------" << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t  " << board[6] << "  |  " << board[7] << "  |  " << board[8]
       << "  " << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\t\t     |     |     " << '\n';
  cout << "\n\n\n";
  cout << "\t\t"
       << "Player 1: " << player1 << "\n\t\t"
       << "Player 2: " << player2 << '\n';
}

void getPlayers() {
  system("clear");

  cout << "Enter a user name who will play X: ";
  cin >> player1;

  cout << "Enter a user name who will play O: ";
  cin >> player2;
}

void whosTurn() {
  if (t_p1 > t_p2) {
    currentPlayer = player1;
  } else {
    currentPlayer = player2;
  }
}

void putX(int v_numb) {

  if (((v_numb < 0) || (v_numb > 9)) ||
      ((board[v_numb - 1] == "X") || (board[v_numb - 1] == "O"))) {
    system("clear");
    cout << "Try again.\n";
    drawBoard();
    t_p2 = 0;
    t_p1 = 1;
  } else {
    board[v_numb - 1] = "X";
    system("clear");
    drawBoard();
    t_p2 = 1;
    t_p1 = 0;
  }
}

void putO(int v_numb) {
  if (((v_numb < 0) || (v_numb > 9)) ||
      ((board[v_numb - 1] == "X") || (board[v_numb - 1] == "O"))) {
    system("clear");
    cout << "Try again.\n";
    drawBoard();
    t_p2 = 1;
    t_p1 = 0;
  } else {
    board[v_numb - 1] = "O";
    system("clear");
    drawBoard();
    t_p2 = 0;
    t_p1 = 1;
  }
}

void winnerScreen() {
  system("clear");
  cout << "==================================================\n";
  cout << R"(                            __/\__
                            \    /
                            /_  _\
                              \/
)";
  cout << "\t\tWinner is: " << winner << endl;
  cout << "==================================================\n";
}

// all winning possibilities

void logic() {

  if (((board[0] == "X") && (board[4] == "X") && (board[8] == "X")) ||
      ((board[2] == "X") && (board[4] == "X") && (board[6] == "X")) ||
      ((board[1] == "X") && (board[4] == "X") && (board[7] == "X")) ||
      ((board[3] == "X") && (board[4] == "X") && (board[5] == "X"))) {
    is_finished = true;
    winner = player1;
  } else if (((board[0] == "O") && (board[4] == "O") && (board[8] == "O")) ||
             ((board[2] == "O") && (board[4] == "O") && (board[6] == "O")) ||
             ((board[1] == "O") && (board[4] == "O") && (board[7] == "O")) ||
             ((board[3] == "O") && (board[4] == "O") && (board[5] == "O"))) {
    is_finished = true;
    winner = player2;
  } else if ((board[0] != "1") && (board[1] != "2") && (board[2] != "3") &&
             (board[3] != "4") && (board[4] != "5") && (board[5] != "6") &&
             (board[6] != "7") && (board[7] != "8") && (board[8] != "9")) {
    is_finished = true;
    winner = "There is no winner!";
  }
}

void play() {

  while ((is_finished != true)) {
    whosTurn();

    cout << "Player: " << currentPlayer;
    cout << "\nEnter a position (1-9)\n";
    cout << ">>";
    cin >> position;

    if (currentPlayer == player1) {
      putX(position);
    } else {
      putO(position);
    }

    logic();

    if (is_finished == true) {
      winnerScreen();
    }
  }
}
