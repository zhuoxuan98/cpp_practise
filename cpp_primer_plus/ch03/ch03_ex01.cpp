//
// Created by otronic on 2023/11/14.
//

#include <iostream>


using namespace std;
const int INCH_FOR_FOOT=12;

int main(){
    int height;
    cout << "Please input your height in inches:_\b";
    cin >> height;
    cout << "Your height " << height << " feet is ";
    cout << height / INCH_FOR_FOOT << " inches and ";
    cout << height % INCH_FOR_FOOT << " feet." << endl;
    return 0;
}
