#include <iostream>
using namespace std;

int nthDigit(int number, int n){
    int temp = number;
    int count = 0;
    while( temp > 0){
        temp /= 10;
        count++;
    }
    if(n > count){
        return -1;
    }
    for (int i = 0; i < count - n; i++){
        number /= 10;
        }
        return number % 10;
}
int main(){

int number = 0;
int n = 0;

cout << "enter a number and an nth number" << endl;
cin >> number;
cin >> n;
cout << nthDigit(number, n);



}