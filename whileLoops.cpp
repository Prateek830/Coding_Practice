#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

int num;
cin >> num;

while(num>=0){
    cout<<num<<endl;
    cin>>num;
}

return 0;
}