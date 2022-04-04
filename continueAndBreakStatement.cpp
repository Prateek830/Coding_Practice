#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

int month;
cin>> month;

int pocketMoney=3000;

for(int date=1;date<=month;date++){
    if(date%2==0){
        continue;
    }
    if(pocketMoney==0){
        break;
    }
    cout << "Today is " << date <<", I can go out today" << endl;
    pocketMoney=pocketMoney-500;
}

return 0;
}