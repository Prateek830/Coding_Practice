// find the sum of all subarray

#include<iostream>
using namespace std;

//Approach-1 iterate for each element till n and sum it. Time Complexity is O(n2)

/* int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int current=0;
    for(int i=0;i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
            current+=ar[j];
            cout<<current<<" ";
        }
    }

    return 0;
} */

//Approach-2: using formula ar[i]*(n-i)*(i+1), Time complexity-O(n)
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ar[i]*(n-i)*(i+1);
    }
    cout<<sum;
    return 0;
}