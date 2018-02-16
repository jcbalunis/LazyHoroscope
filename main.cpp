//Authors: Joseph Balunis
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string fname, lname;
    int flname;

  //get user input
  cout<< "What is your first name?\n";
  cin>> fname;
  cout<< "What is your last name?\n";
  cin>> lname;
  
    
  //tell fortune
  flname = fname.length();
  cout<< "Welcome, " <<fname[0]<< "." <<lname[0]<< "., here is your fortune...\n";
  cout<< "your lucky number is "<< flname << "\n";

  if(fname[0] == 'a' ||
     fname[0] == 'e' ||
     fname[0] == 'i' ||
     fname[0] == 'o' ||
     fname[0] == 'u' ||
     fname[0] == 'A' ||
     fname[0] == 'E' ||
     fname[0] == 'I' ||
     fname[0] == 'O' ||
     fname[0] == 'U')
    
    { cout<< "you are destined to be famous!\n";}
    else
    { cout<< "you should keep a low profile.\n";} 

  if(  lname[lname.length() - 1] == 'a' ||
       lname[lname.length() - 1] == 'e' ||
       lname[lname.length() - 1] == 'i' ||
       lname[lname.length() - 1] == 'o' ||
       lname[lname.length() - 1] == 'u' ||
       lname[lname.length() - 1] == 'A' ||
       lname[lname.length() - 1] == 'E' ||
       lname[lname.length() - 1] == 'I' ||
       lname[lname.length() - 1] == 'O' ||
       lname[lname.length() - 1] == 'U')
    { cout<< "you have already met your true love.\n";}
    
    cout<< "have a good day!\n";


  return 0;
}
