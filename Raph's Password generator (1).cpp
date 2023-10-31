#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate a random password of a given length
string generatePassword(int length) {
    string lowercase = "abcdefghijklmnopqrstuvwxyz";
    string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string numbers = "0123456789";
    string symbols = "!@#$%^&*()_+-=[]{};':\",./<>?\\|";
    string password = "";
    for (int i = 0; i < length; i++) {
        int choice = rand() % 4;
        if (choice == 0) {
            password += lowercase[rand() % lowercase.length()];
        } else if (choice == 1) {
            password += uppercase[rand() % uppercase.length()];
        } else if (choice == 2) {
            password += numbers[rand() % numbers.length()];
        } else {
            password += symbols[rand() % symbols.length()];
        }
    }
    return password;
}

int main() {
    // Set the seed for the random number generator using the current time
    srand(time(0));
    // Declare variables for password length and user choice
    int length;
    char choice;
    // Welcome message
    cout << "Welcome to raph's password generator" << endl;
    do {
        // Prompt the user to enter the desired password length and read it in using cin
        cout << "Enter password length: ";
        cin >> length;
        // Generate a random password of the specified length
        string password = generatePassword(length);
        // Print out the generated password
        cout << "Generated password: " << password << endl;
        // Prompt the user if they want to generate another password
        cout << "Do you want to generate another password? (y/n) ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}