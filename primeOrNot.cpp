#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

int  number;
cin >> number;
int div;
for(div=2;div<number;div++){
    if(number%div==0){
        cout << number << " is not a prime number"<<endl;
        break;
    }
}
if(div==number){
cout << number << " is a prime number"<<endl;
}

return 0;
}