#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
using std::cout;
using std::cin;

int main() {
  cout << "Guess a number between 1 and 100\n";
  srand(time(NULL));
  int number = (rand() % 100) + 1;

  int guess = 0;
  int number_of_guesses = 0;
  while(guess != number) {
    cout << "Guess a Number: ";
    cin >> guess;
    number_of_guesses++;
    if (guess > number) {
      cout << "Too High!\n";
    }
    if (guess < number) {
      cout << "Too Low!\n";
    }
  }

  cout << "WINNER!!!!\n";
  cout << "It only took you ";
  cout << number_of_guesses;
  cout << " guesses!\n";

  return 0;
}


