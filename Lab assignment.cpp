#include <iostream>
#include <string>
using namespace std;

int main () {
cout <<"*********************************************\n";
cout <<"\t   YOUR PROGRAM \n";
cout <<"*********************************************\n\n";

string name;
string hometown;
int Age;
int birthYear;
int yearTurn50;

cout << "What is your name?\t\t: ";//insert your name here/
getline(cin, name);
cout << "Where do you come from?\t\t: ";//insert where you came from/
getline(cin,hometown);
cout <<"How old are you?\t\t: ";//insert your age/
cin >>Age;
birthYear= 2026 - Age;
yearTurn50= birthYear + 50;

cout << "\n--------------------------------\n";
cout << "Hi " << name << ",your year of birth is \n";
cout << birthYear << " and your age is "<<Age<<".";

cout << "\n--------------------------------\n";
cout << "Name : " << name << "\n";
cout << "Hometown :" << hometown<< "\n";
cout << "Year Of Birth :" << birthYear << "\n";
cout << "Age : " << Age << "\n";
cout << "Year Turn 50 :" << yearTurn50 << "\n";


cout << "\n*********************************************\n";
cout << "\t\tGOOD BYE\n";
cout << "*********************************************\n";

return 0;
}
