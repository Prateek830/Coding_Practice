#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int num){
    int ans=0;
    int x=1;

    while(x<=num){
        x*=2;
    }    
    x/=2;

    while(x>0){
        int lastdigit = num/x;
        num-=lastdigit*x;
        x/=2;
        ans=ans*10+lastdigit;
    }
    return ans;
}

int32_t main(){

    int num;
    cin >> num;

    cout << decimalToBinary(num);
    return 0;
}