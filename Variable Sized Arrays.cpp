#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin >> n >> q;
    int **seq = new int*[n]; // seq is a pointer to An array of pointers, array size is n
    // new int*[n] represents an array of (integer pointers)
    //new int[n] is just an array of integers
    //int **seq represents a pointer to a pointer.
    
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        seq[i] = new int[k];
        for(int j=0;j<k;j++){
            cin >> seq[i][j];
        }
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin >> a >> b;
        cout << seq[a][b] << endl;
    } 
}
