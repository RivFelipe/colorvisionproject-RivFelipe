#include <iostream>
<<<<<<< HEAD
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
  
=======
#include <fstream>
#include <string>

using namespace std;

int main()
{
int R,G,B;
string p1,p2,p3;

cout << "Enter a hexadecimal Ex.(If you were enter the value #F47D8C you would enter F4 as p1 and so on.) " << endl;
cout << "Enter p1: ";
getline(cin,p1);
cout << "Enter p2: ";
getline(cin,p2);
cout << "Enter p2: ";
getline(cin,p3);

for(
p1= R= s10= 16^1 * F+4 * 16^0=16 * 15+4 * 1=240+4=244;
p2= G= s10= 16^1 * 7+16^0 * D=16 * 7+1 * 13=112+13=125;
p3= B= s10 = 16^1 * 8 + 16^0 * C = 16 * 8+1 * 12=128+12=140;

cout << R << endl;
cout << G << endl;
cout << B << endl;


>>>>>>> origin/master
  return 0;
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