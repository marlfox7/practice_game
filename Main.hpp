#include <iostream>
#include <string>

using namespace std;

int main() {
  string name = "test";
  string userInput = "test";
  
  cout << "Welcome to a game" << endl << "If you'd like to play, enter \" 1 \" . Otherwise the game will close." << endl;
  cin >> userInput;
  cout << userInput;
  
  if (userInput == "1") {
    cout << "Enter your character's name: \n";
    cin >> name;
    cout << "You have chosen: " << name << "." endl;
  }
  else {
    cout << "Closing the game: Thank you for playing!" << endl;
  }
  
  return 0;
}
