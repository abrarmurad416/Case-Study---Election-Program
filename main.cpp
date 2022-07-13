#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
cout <<"--Vote Analysis Program--"<< endl << endl;

string Candidate1, Candidate2, Candidate3;
cout << "Enter name of First Candidate: ";
cin >> Candidate1;
cout << "Enter name of Second Candidate: ";
cin >> Candidate2;
cout << "Enter name of Third Candidate: ";
cin >> Candidate3;

long Votes1, Votes2, Votes3; 
cout << "Enter votes for " << Candidate1 << ":";
cin >> Votes1;
cout << "Enter votes for " << Candidate2 << ":";
cin >> Votes2;
cout << "Enter votes for " << Candidate3 << ":";
cin >> Votes3; 
cout<< endl;
  
long VotesTotal = Votes1 + Votes2 + Votes3;
double Percent1 = 100 * double (Votes1)/VotesTotal;
double Percent2 = 100 * double (Votes2)/VotesTotal;
double Percent3 = 100 * double (Votes3)/VotesTotal;
const int ColWidth = 10; //Width of columns in table
const int ColWidth2 = 6; 
cout.setf(ios::fixed);
cout.precision(2);

//Output column headings
cout.setf(ios::left);
cout.width(ColWidth);cout <<"Candidate";
cout.setf(ios::right);
cout.width(ColWidth2);cout <<"Votes";
cout.width(ColWidth2);cout <<"Pct" << endl;

//Output election results
cout.setf(ios::left);
cout.width(ColWidth);cout <<Candidate1;
cout.setf(ios::right);
cout.width(ColWidth2);cout <<Votes1;
cout.width(ColWidth2);cout <<Percent1 << endl;
  
cout.setf(ios::left);
cout.width(ColWidth); cout <<Candidate2;
cout.setf(ios::right);
cout.width(ColWidth2); cout <<Votes2;
cout.width(ColWidth2); cout <<Percent2 << endl;

cout.setf(ios::left);
cout.width(ColWidth); cout <<Candidate3;
cout.setf(ios::right);
cout.width(ColWidth2); cout <<Votes3;
cout.width(ColWidth2); cout <<Percent3 << endl;

cout.width(ColWidth); cout <<"TOTAL:";
cout.width(ColWidth2); cout <<VotesTotal << endl;
return(0);

//review 14 If 0 is entered for one of the vote values then the code simply outputs the percentage is 0 and votes as 0, and it doesn't count it into the total number of votes. If a character was entered in the place of a vote number then the code would skip all the other steps and output 0 votes and 0 percent for the specific vote where the character was inserted. The total will be some huge number.
  
//review 15 Candidate 3 has been added.
  
//review 16 widths of the last two columns have been changed to 6.
}