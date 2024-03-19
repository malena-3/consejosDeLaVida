#include <iostream>   
#include <string>
#include <iomanip>
//Libraries
using namespace std;
#include "welcome.h"

void welcome(string& bestfriend, int& chosenNum);
/*Precondition: bestfriend has the User's name and chosenNum has
  the integer chosen by the User.
  Postcondition: welcome gathers the User's name and their 
  chosen number of type int which is between 1-20.*/ 
void mandatos(int chosenNum, string bestfriend);
/*Precondition: chosenNum has the integer chosen by the User
 and bedtfriend has the User's name.
 Postcondition: mandatos has ten commands in the informal 
 tu form. And outputs a mandato based on the User's chosen number.
 MANDATOS ARE ODD.*/
void subjuntivos(int chosenNum, string bestfriend);
/*Precondition: chosenNum has the integer chosen by the User
 and bedtfriend has the User's name.
 Postcondition: subjuntivos has ten commands in the informal 
 tu form. And outputs a subjuntivo based on the User's chosen number.
 SUBJUNTIVOS ARE EVEN.*/

int main() //Main function 
{
  string bestfriend = "bestie";
  int chosenNum = 0;
  char answer = 'm';
  //Function declarations

  welcome(bestfriend, chosenNum);
  //Function Calls
  
return 0;
}
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
void mandatos(int chosenNum, string bestfriend) //Mandato function with 10 mandatos > all ODD cases.
{
  switch(chosenNum)
    {
      case 1: 
      cout << "No importa cuán difícil o imposible sea" 
           << ", nunca pierdas de vista tu objetivo, " 
           << bestfriend << "." << endl;
    break;
      case 3:
      cout << "Si no te arriesgas, no puedes crear un futuro. Toma" 
           << " riesgos, " << endl << bestfriend << "." << endl;
    break; 
      case 5:
      cout << "El poder no está determinado por tu tamaño sino por " 
           << "el tamaño de tu corazón y tus sueños. " 
           << "Sueña en grande, " << bestfriend << endl;
    break;
      case 7:
      cout << "La comida es combustible. Come Bien, "
           << bestfriend << endl;
    break;
      case 9:
      cout << "Sé ti mismo, " << bestfriend << "; "
           << "todos los demás ya están ocupados." << endl;
    break;
      case 11:
      cout << "El éxito no es definitivo, el fracaso "
           << "no es fatal: es el coraje de continuar lo que "
           << "cuenta. Ten coraje, " << bestfriend << "." << endl;
    break;
      case 13:
      cout << "No dejes que nadie apague tu luz, " << bestfriend 
           << "." << endl;
    break;
      case 15:
      cout << "No subestimes tu valor. Tú eres digno, "
           << bestfriend << "." << endl;
    break; 
      case 17:
      cout << "Todo el mundo tiene cosas que puede y no "
           << "puede hacer." << endl << "Haz lo que puedas, " 
           << bestfriend << "." << endl;
    break;
      case 19:
      cout << "Deja de contar solo las cosas que has perdido "
           << "y recuerda" << endl << "las cosas que tienes, "
           << bestfriend << "." << endl;
    break;
    }
}
void subjuntivos(int chosenNum, string bestfriend) //Subjuntivo Function with 10 Subjuntivos > all EVEN cases.
{
  switch(chosenNum)
    {
      case 2:
      cout << "Es importante que confíes en ti mismo, "
           << bestfriend << "." << endl; 
    break; 
      case 4:
      cout << "Yo sugiero que te sigas leal a tus fronteras, "
           << bestfriend << "." << endl;
    break;
      case 6: 
      cout << "Ojalá que entiendas el poder del amor y la " 
           << "felicidad" << endl << "dentro de ti, " 
           << bestfriend << "." << endl;
    break;
      case 8:
      cout << "Yo recomiendo que aceptes las cosas que no puedes " 
           << endl << "controlar, "
           << bestfriend << "." << endl;
    break;
      case 10:
      cout << "Yo espero que no le temas a tiempo y disfrutes cada " 
           << "paso" << endl << "de tu viaje, "
           << bestfriend << "." << endl;
    break;
      case 12:
      cout << "Yo sugiero que aprecies incluso los pequeños momentos, "
           << bestfriend << "." << endl;
    break;
      case 14:
      cout << "Es importante que duemas bien y bebaas mucha agua, "
           << bestfriend << "." << endl;
    break;
      case 16:
      cout << "Yo recomiendo que trabajes duro por el futuro que quieres crear, "
           << bestfriend << "." << endl;
    break;
      case 18:
      cout << "Es importante que conozcas tus fortalezas y debilidades, "
           << bestfriend << "." << endl;
    break;
      case 20:
      cout << "Yo espero que tengas confianza en tus habilidades, "
           << bestfriend << "." << endl;
    break;   

    }
}
