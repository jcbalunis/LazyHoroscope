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
  cout<< "Please enter you first name. \n ";
  cin>> fname;
  cout<< "please enter you last name. \n";
  cin>> lname;
  
    
  //tell fortune
  flname = fname.length() + lname.length();
  cout<< "Welcome, " <<fname[0]<<lname[0]<< ", here is your fortune...\n";
  cout<< "Your luck number is "<< flname << ". \n";




  return 0;
}
