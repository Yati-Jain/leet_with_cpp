# include <iostream>
using namespace std;

string isprime(int n){
    for (int i=2; i*i <= n; i++ ){
        if(n%i==0){
            return "non prime";
        }
    }
    return "prime";
}

int main (){
    int n = 42;
    cout<< isprime(n)<< endl;
    return 0;
}
