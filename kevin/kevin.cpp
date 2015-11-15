#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
string name;
double amount,sum,avg;
double a1,a2,a3,a4,a5;
ifstream infile;

infile.open("BONUS.txt");

if (!infile){
cout<<"Error opening the file BONUS.txt. Please check your input file"<<endl;
return(0);
}

cout << setw(20) << "Name" << setw(20) << "Total Bonus" << setw(20) <<"Avg Bonus"<<endl;
float grand_tot = 0;
float avg_per_person = 0;
int count=0;

while (!infile.eof()){

infile >> name >> a1 >> a2 >> a3 >> a4 >> a5;

float tot_bonus_emp = a1+a2+a3+a4+a5;
float avg_bonus_emp = (float)(tot_bonus_emp)/5;

// cout << name << ":" << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
cout <<  setw(20) << name << setw(20) << setprecision(6) << tot_bonus_emp << setw(20) << setprecision(5) <<avg_bonus_emp << endl;

grand_tot+=tot_bonus_emp;
count++;

}

cout << "-----------------------------------------------------------------------------"<<endl;
cout <<  setw(20) << "Grand Total" << setw(20) << setprecision(7) << grand_tot ;
cout <<  setw(20) << "Avg Per Person" << setw(20) << setprecision(6) << (float)(grand_tot/count) ;
return 0;
}