#include <iostream>
#include <string>
#include <vector>

using namespace std;

// function prototypes
char option();
vector <string> addColor(vector <string>); 
vector <string> showColors(vector <string>);

// main program
int main() {
  vector <string> list;
  char choice;

  
  cout << "Welcome to Color Now! :)\n";
  cout << "Menu\n";
  cout << "===================\n";
  do{
   choice = option();
    if( choice == 'T' || choice == 't' ){
      list = addColor(list);
    }
  }while( choice != 'E' && choice != 'e' );
  
  showColors(list);
}

// function definitions
char option()
{
char input;
    //input/output
      cout << "(T)ry new color\n";
      cout << "(E)nd\n";
      
      cin >> input;
      cin.ignore();
      return input;
}
vector <string> addColor (vector <string>A)
{
  bool colorMatch;
  string input;
  cout << "Enter Color (Red,Green,Blue):\n";
  getline(cin,input);
  if (input == "Red" || input == "red" || input == "Green" || input == "green" || input == "Blue" || input == "blue"){
    cout << "Does the displayed color match your color?(Y)es or (N)o ";
    cin >> colorMatch; /// I'm stuck here, not really sure how to get out of infinite loop and continue on with the porgram///
  }
  A.push_back(input);
  return A;
}
vector <string> showColors (vector <string> list)
{
  if (list.size() != 0)
  {
    cout << "Colors picked \n";
    for (int i = 0; i <list.size(); i++)
    {
      cout << i + 1 << ". " << list[i] << endl;
    }
  }
  return list;
}