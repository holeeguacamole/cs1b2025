#include <iostream>
using namespace std;


float power( int b, int e){
if(e == 1){
    float res = b;
    return res;
}
else{
    float res = b *= power(b, e -1);
    return res;
}
}
int main(){
    int base , exponent = 0;
    cout << "enter two numbers, onne base and one exponent" << endl;
    cin >> base;
    cin >> exponent;
    float res = power(base, exponent);
    power(base, exponent);
    
    cout << res;
   cout << "queefe";
return 0;
}