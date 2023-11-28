//
// Created by otronic on 2023/11/28.
//
#include <iostream>

using namespace  std;

const int minutes_pre_degree =60;
const int seconds_pre_minute =60;

int main(){
    int degree ,minute ,second;
    float degrees;

    cout << "Enter a latitude in degrees ,minutes and second:\n";
    cout << "First ,enter the degrees:";
    cin >> degree;
    cout << "Next ,enter the minute of arc:";
    cin >> minute;
    cout << "Finally ,enter the second of arc:";
    cin >> second ;

    degrees =degree +float(minute)/minutes_pre_degree+float(second)/(seconds_pre_minute * minutes_pre_degree);

    cout << degree << " degrees,";
    cout << minute << " minutes,";
    cout << second << " second= ";
    cout << degrees<< " degrees."<< endl;

    return 0;
}