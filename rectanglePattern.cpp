#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

int row, column;
cin>> row >> column;

for(int i=0; i<row;i++ ){
    for(int j =0;j<column;j++){
        cout << "* ";
    }
    cout << endl;
}

    return 0;
}