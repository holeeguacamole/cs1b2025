#include <iostream>
using namespace std;
bool isPerfectNumber(int n){
    int divisors = 1;
    
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            divisors+= i;
        }
    }        
    if( n == divisors){
        return true;
    }
    else{
        return false;
    }

return true;
}
int main(){
    int number = 0;
    cout << "Enter a number to see if its perfect!" << endl;
    cin >> number;
    isPerfectNumber(number);
    if(isPerfectNumber(number)){
        cout << number << " is a perfect number ! wow !" << endl;
    }
    else{
        cout << number << " is not perfect >:(" << endl;
    }



    
}