#include <iostream>
using namespace std;

int main()
{
  // initializations
  int randNum = 0;
  int input = 0;
  int yn = 0;
  int run = 0;
  int guesses = 0;
  srand(time(NULL));

  // generate the first random number
  randNum = rand() % 100 + 1;

  while(run == 0)
  {
    // receive inputs and create numbers
    cout << endl << "enter a number between 1 and 100" << endl;      
    cin >> input;
    guesses++;
    cout << "You Guessed: " << input << endl;

    // compare results
    if(randNum < input) cout << "Too High!" << endl;
    if(randNum > input) cout << "Too Low!" << endl;
    if(randNum == input)
    {
      // display results and ask if they want to restart
      cout << "You Win!" << endl << "Guesses: " << guesses << endl << "Play Again? (0=y 1=n)" << endl;
      cin >> yn;
      guesses = 0;
      randNum = rand() % 100 + 1;
      if(yn == 1)
      {
	      run = 1;
      }
    }
  }
}
