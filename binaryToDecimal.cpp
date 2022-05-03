#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int num){
    int n=0;
    int x=1;
    while(num>0){
    int rem=num%10;
    num=num/10;
    n+=rem*x;
    x*=2;
    }
    return n;
}

int32_t main(){
    int num;
    cin >> num;
    cout << binaryToDecimal(num);
    return 0;
}