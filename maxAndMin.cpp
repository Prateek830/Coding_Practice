#include<stdio.h>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

struct Pair
{
    int max=INT_MIN;
    int min=INT_MAX;
};

Pair getMinMax(int ar[],int n){
    struct Pair minmax;
    int i;

    //If no of element is 1
    if(n==1){
        minmax.min=ar[0];
        minmax.max=ar[0];
    }

    //If no of element is 2
    if(ar[0]>ar[1]){
        minmax.min=ar[1];
        minmax.max=ar[0];
    }
    else{
        minmax.min=ar[0];
        minmax.max=ar[1];
    }

    //If no of element is more than 2
    for(i=2;i<n;i++){
        minmax.min=min(minmax.min,ar[i]);
        minmax.max=max(minmax.max,ar[i]);
    }
    return minmax;
}

int32_t main(){
    int n;
    cin >> n;

    int ar[n];

    for(int i=0;i<n;i++){
        cin >> ar[i];
    }

    struct Pair minmax=getMinMax(ar,n);
    cout << "Minimum Element " << minmax.min << endl;
    cout << "Maximum Element " << minmax.max << endl; 
    return 0; 
    }
