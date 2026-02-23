# include <bits/stdc++.h>
using namespace std; 

double pow(double x, int n){
    long binform = n;
    if(n<0){
        x = 1/x;
        binform = -binform;
    }
    double ans =1;
    while(binform>0){
        if(binform %2 ==1){
            ans *= x;
        }
        x*=x;
        binform/=2;

    }
    return ans;

}

int main(){
    int x;
    cin>> x;
   int n;
   cin>>n;
    
    
    cout<< pow(x,n);
    return 0;
}