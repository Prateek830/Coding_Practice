#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}


int main(){



#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

int n;
cin >> n;

for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        int ans = fact(i)/(fact(j)*fact(i-j));
        cout << ans <<" ";
    }
    cout << endl;
}

return 0;
}