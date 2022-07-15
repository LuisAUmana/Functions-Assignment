#include <iostream>
#include <cmath>
using namespace std;

int main() {
int mph = 0;
double kph = 0;
double hours = 0;

cout<<"How far did you go?"<<endl;
cin>>mph;
cout<<mph<<" miles"<<endl;
 kph = mph*1.609;
cout<< "In Kilometers, that is "<<kph<<"km."<<endl;
cin>>kph;
 hours = kph/5;


cout<<"In those 5 hours, you went "<<hours<< "  km per hour."<<endl;
 cin>>hours;
	return 0;
}