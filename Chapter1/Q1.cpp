// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int a[100][100];
    int counter = 0;

    for(int k = 0; k <= n - 1; k++){
        for(int i = 1; i <= n - k; i++){
            a[i][i - k] = k;
            counter++;
            cout << k << " " << i <<endl;
        }
    }
    cout << counter;
    return 0;
}

// Answer
// T(n) = (n * (n + 1)) / 2
