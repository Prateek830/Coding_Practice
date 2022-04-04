#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif

    int firstNumber,secondNumber,thirdNumber;
    cin >> firstNumber >> secondNumber >> thirdNumber;

    if(firstNumber>secondNumber){
        if(firstNumber>thirdNumber){
            cout <<  firstNumber << endl;
        }else{
            cout << thirdNumber << endl;
        }
    }else{
        if(secondNumber>thirdNumber){
            cout << secondNumber << endl;
        }else{
            cout << thirdNumber <<endl;
        }
    }
     
    return 0;
} 