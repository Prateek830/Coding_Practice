#include<iostream>
using namespace std;

// Remove min no of elements from the given array 
// such that in the resultant array, 
// the sum of every adjacent pair must be even. 
// Ex: i/p-> 3,1,2,5,6    o/p->2    Reason: 2,6 are removed
// Approach : Find the count of elements in an array for even and odd, print the min value of them.

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int evenCount, oddCount;
    evenCount=0;
    oddCount=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            evenCount+=1;
        }else{
            oddCount+=1;
        }
    }
    if(oddCount<evenCount){
        cout<<oddCount;
    }else{
        cout<<evenCount;
    }
    return 0;
}