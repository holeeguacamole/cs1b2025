#include <iostream>
using namespace std;

int main(){

string userString;

cout << "enter a string of letters" << endl;
cin >> userString;

int i = 0;
char longestString[10];
int stringLength = 0;

while (i < userString.length()){
    char ch = userString[i];
    if(userString[i] == userString[++i])
    break;
    else{
        longestString[i] = userString[i];
        stringLength++;
        i++;
    }
    cout << longestString;
    cout << stringLength;
}
return 0;
}