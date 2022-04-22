#include<iostream>
#include<cmath>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

int n;
cin>>n;

bool flag=0;

for(int i=2;i<=sqrt(n);i++){
    if (n%i==0)
    {
        flag=1;
        cout << i <<" is not a prime nummber";
        break;        
    }
}

if(flag==0){
cout << n << " is a prime number";
}
return 0;

}