#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
    #endif

    int num;
    cin >> num;
    
    if(num%2==0){
        cout << "this is even number";
    }else{
        cout << "this is odd number";
    }

    return 0;
}