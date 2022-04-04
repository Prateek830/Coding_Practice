#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

int  number;
cin >> number;

for(int num=1; num<=number;num++){
    if(num%3==0){
        continue;
    }
    cout << num << ", is not divisible by 3" << endl;
}

return 0;
}