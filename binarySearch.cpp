#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

 int binarysearch(int ar[],int n,int k){
    int first=0;
    int end=n;
    while(first<=end){
        int mid=(first+end)/2;
        if(k==ar[mid]){
            return mid;
        }
        else if(ar[mid]>k){
            end=mid-1;
        }else{
            first=mid+1;
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
    cout << binarysearch(ar,n,k);
    return 0;
}