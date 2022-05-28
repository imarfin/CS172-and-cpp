#include <iostream>
#include <string>
#include <vector>
using namespace std;


// group project - 3
int main() {
  int x;
  cout << "Welcome to Group[2]" << endl;
  cout << "Group Members:\n Annebelle \n Momo \n Ayinde \n Luis \n Arfin" << endl;
  vector<string> wordList = {"monkey","rabbit", "panda", "tiger", "bear", "scorpion", "hawk", "fish", "elephant", "penguin"};
  
  cout << "Enter a number of players (1-3):";
  cin >> x;
  while (cin.good() == false || x < 1 || x > 3) {
    cout << "Incorrect player numbers" << endl;
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Enter a number of players (1-3):";
    cin >> x;
  }

  for (int i = 0; i <= 10; i++) {
    int z = i;
    cout << "Player No " << z % x+1 << endl;
    cout << "Guess (a-z): ";
    char y;
    cin >> y;
    if (cin.good() == false || y < 'a' || y > 'z') {
      cout << "That's incorrect input. Try again!" << endl;
      i=i-1; 
      cin.clear();
      cin.ignore(10000, '\n');
    } else {
      // cout << "Player No " << z % x << endl;
    }
  }
  cout << endl;
  cout << "Would you like to continue?" << endl << "Y-(for yes) or  N - (No)" << endl;
  char retry;
  cin >> retry;
  if (retry == 'Y') {
    cout << endl << endl;
    return main();
  } else {
    return 0;
  }
}