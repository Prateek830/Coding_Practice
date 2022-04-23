#include<iostream>
using namespace std;

void fib(int n){
    int s1=0;
    int s2=1;
    int nextTerm;

    for(int i=1;i<=n;i++){
        cout << s1 <<" ";
        nextTerm=s1+s2;
        s1=s2;
        s2=nextTerm;
    }
    return;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

int n;
cin>>n;

fib(n);
return 0;
}
