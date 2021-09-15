#include <iostream>
using namespace std;

int main()
{
  // initializations
  int randNum = 0;
  int input = 0;
  int run = 0;
  srand(time(NULL));

  while(run == 0)
  {
    // receive inputs and create numbers
    cout << endl << "enter a number between 1 and 10" << endl;      
    cin >> input;
    randNum = rand() % 10 + 1;

    // display results
    cout << "Random Number: " << randNum << endl << "Your Number: " << input << endl;

    // compare results and stop code if they win
    if(randNum == input)
    {
      cout << "You Win!" << endl;
      run = 1;
    }
  }
}
