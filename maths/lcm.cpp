# include <iostream>
using namespace std;


int gcd (int a, int b){
    while(a> 0 && b>0){
        if(a>b){
            a= a%b;

        }
        else{
             b= b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int main(){
    int a;
    int b;
    cin>> a;
    cin>> b;
   int  GCD =  gcd(a, b);
    int lcm = a*b/GCD;
    cout<< lcm<<endl;
    return 0;
}