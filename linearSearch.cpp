#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int linearSearch(int ar[],int k,int n){
    for(int i=0;i<n;i++){
        if(ar[i]==k){
            return i;
        }
    }
    return -1;
}

int32_t main(){
int n,k;
cin >> n >> k;
int ar[n];

for(int i=0;i<n;i++){
    cin >> ar[i];
}

cout << linearSearch(ar,k,n);
return 0;

}