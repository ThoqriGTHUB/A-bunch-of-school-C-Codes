#include <iostream>
#include <string>
using namespace std;

int main() {
  string letters, reversedLetters = "";
  cout << "Enter the letters to be reversed: ";
  cin >> letters;
  
  int length = letters.length();
  
  for (int i = length - 1; i >= 0; i--) {
    reversedLetters += letters[i];
  }
  
  cout << "The reversed letters are: " << reversedLetters << endl;
  
  return 0;
}
    