#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }

    int minElement=100;
    for(int i=0;i<n;i++){
        if(idx[ar[i]]!=-1){
            minElement=min(minElement,idx[ar[i]]);
        }else{
            idx[ar[i]]=i;
        }
    }

    if(minElement==100){
        cout<<"-1"<<endl;
    }else{
        cout<<minElement+1<<endl;
    }

    return 0;
}