#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin >> a;
    cin >> b;
   string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int i;
    for(i = a;i<b+1 ;i++){
        if (i >= 10){
            if (i&1){
                cout << "odd\n";
            }
            else{
                cout<<"even\n";
            }
        }
        else{
            cout << num[i] << "\n";
        }

    }
}