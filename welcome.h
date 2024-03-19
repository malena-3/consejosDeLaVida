#ifndef CONSEJOSDELAVIDA_WELCOME_H
#define CONSEJOSDELAVIDA_WELCOME_H
//void welcome(string& bestfriend, int& chosenNum);
/*Precondition: bestfriend has the User's name and chosenNum has
  the integer chosen by the User.
  Postcondition: welcome gathers the User's name and their 
  chosen number of type int which is between 1-20.*/ 

#include<iostream>
#include<string>
using namespace std;

void welcome(string& bestfriend, int& chosenNum) //Welcome function
{
  char answer; //Variable declarations

  cout << endl;
  cout << "Hola(≧∇≦)/ I'm your bestfriend ♡Computadora♡,"
        << " Dora for short.\n" << "Today "
       << "I'll be giving you some pearls of wisdom(˶╹̆ ▿╹̆˵)و✧\n";
  cout << "★・・・・・・★・・・・・・★・・・・・・★" 
       << "・・・・・・★・・・・・" << endl;
  cout << "Please type in your name: "; 
  cin >> bestfriend;
  //User interface that gathers the User's name

  do /*if-else loop inside a do-while loop. if-else makes sure the inputted number is within range (1-20)
     and the do-while loop gives the User a pearl of wisdom while the User inputs y/Y and ends the 
     program if the User's input is anything other than y/Y*/
  {
  cout << endl; 
  cout << setw(12) << "Ok " << bestfriend  
       << " pick a number between 1 and 20: ";
  cin >> chosenNum;
       cout << endl;

    if (chosenNum < 1 || chosenNum > 20)  
    {
      cout << setw(56);
      cout << "Ⓧ Sorry, but the number you entered is notⓍ" << endl
           << setw(36) << "in the 1 through 20 " << "range ಥ‿ಥ" 
           << endl;
    }
    else
    {
   mandatos(chosenNum, bestfriend);
   subjuntivos(chosenNum, bestfriend);
       cout << endl;
  cout << setw(46) << "☆.｡.:*Would you like another pearl of" 
       << " wisdom? .｡.:*☆";
       cout << endl;
  cout << setw(49) << "If so please press Y, if not press N: ";
    cin >> answer;
  }
  }
  while (answer == 'y' || answer == 'Y');
        if (answer != 'y' || answer != 'Y')
        {
          cout << "\nAlright then, goodbye!";
        }
  
}

#endif
