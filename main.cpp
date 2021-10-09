#include <iostream>
#include <ctype.h>
#include <cstring>
#include <cctype>
using namespace std;


int main() {

  //initialization
  char inStr[80];
  char output[81];
  char inverse[81];
  bool ilChars = true;
  bool palindrome = true;
  cin.get(inStr, 80);
  cin.get();
  int size = strlen(inStr);


  //remove non-alphanumeric characters  
  while(ilChars == true){
    for(int i = 0; i < size; i++){
      ilChars = false;

      //if the character isn't alphanumeric, shift every character after it forward 1 spot
      if(isalnum(inStr[i]) == false){ 
        ilChars = true;
        for(int j = i; j < size - 1; j++){
          inStr[j] = inStr[j + 1];
        }
        size--;
        break;
      }
    }
  }


  //convert to lowercase and compare the arrays
  for(int i = 0; i < size; i++){
    output[i] = inStr[i];
  }
  for(int j = 0; j < size; j++){
    if(isalpha(output[j])){
      char c = tolower(output[j]);
      output[j] = c;
    }
    inverse[j] = output[size - 1 - j];
  }
  output[size] = '\0';
  inverse[size] = '\0';


  for(int i = 0; i < size; i++){
    palindrome = true;
    if(output[i] != inverse[i]){
      palindrome = false;
      cout << "not a palindrome" << endl;
      break;
    }
  }
  
  //tell if it's a palindrome
  if(palindrome == true){
    cout << "palindrome!" << endl;
  }
}