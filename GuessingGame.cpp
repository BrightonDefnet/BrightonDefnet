#include <iostream>
using namespace std;

int main()
{
  int randNum = 0;
  int input = 0;
  
  srand(time(NULL));

  
  
  randNum = rand() % 10 + 1;
  cout << randNum;
}
