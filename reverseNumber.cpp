#include<iostream>
#include<cmath>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

int number;
cin>>number;

int reverse=0;
while (number>0)
{
    int lastNumber=number%10;
    reverse=reverse*10+lastNumber;
    number=number/10;
}

cout << reverse;
return 0;
}