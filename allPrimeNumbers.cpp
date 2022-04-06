#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

int  a,b;
cin >> a >> b;
int div;
for(int number =a;number<=b;number++){
for(div=2;div<number;div++){
    if(number%div==0){
        break;
    }
}
if(div==number){
cout << number << " is a prime number"<<endl;
}}

return 0;
}