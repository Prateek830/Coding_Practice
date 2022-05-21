#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int ar[n];
for(int i=0;i<n;i++){
    cin>>ar[i];
}

    //Approach-1
    /* for(int i=0;i<n;i++){ 
		for(int j=1;j<n-i;j++){
			if(ar[j-1]>ar[j]){
				int temp=ar[j-1];
				ar[j-1]=ar[j];
				ar[j]=temp;
			}
		}
	}*/

    //Approach-2
    int counter=1;
    while(counter<n-1){
        for(int i=0;i<n-counter;i++){
            if(ar[i]>ar[i+1]){
                int temp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
            }
        }
        counter++;
    }

	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}


    return 0;
}