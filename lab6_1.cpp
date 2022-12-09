#include<iostream>
using namespace std;

int main(){
    int x = 1, y = 0, z = 0;
    while(x!=0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x == 0) break;
        if(x%2==0){
            y++;
        }else{
            z++;
        }
    }
    cout << "#Even numbers = "<< y << endl;
    cout << "#Odd numbers = " << z;
    return 0;
}