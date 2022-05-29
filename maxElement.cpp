// Find the max element from the given array

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int maxElement=0;
    for(int i=0;i<n;i++){
        maxElement=max(maxElement,ar[i]);
        cout<<maxElement<<" ";
    }
    return 0;
}