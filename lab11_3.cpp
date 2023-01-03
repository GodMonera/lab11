#include <iostream>
#include<fstream>
#include <iomanip>
#include<cmath>

using namespace std;

int main(){
    double sum ,sumpow2, i=0;
    ifstream source;
    source.open("score.txt");

    string textline;
	while (getline( source , textline )) { 
    
		sum = sum + atof(textline.c_str());
        sumpow2 = sumpow2 + pow(atof(textline.c_str()),2);
        i++;

		} 

   
    source.close();
    double mean , sd;
    mean = sum/i;   
    sd = sqrt(sumpow2/i - pow(mean,2));       

    cout << "Number of data = "<< i <<"\n";
    cout << setprecision(3);
    cout << "Mean = " << mean <<"\n";
    cout << "Standard deviation = "<< sd <<"\n";

}