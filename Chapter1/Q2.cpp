// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;

int main() {
    int m = 8;
    int x = 0;
    int counter = 0;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= m - i; j++){
            x = x + 1;
            counter++;
            cout << i << " " << j <<endl;
        }
    }
    cout << counter;
    return 0;
}

// Answer
// T(n) = (n * (n - 1)) / 2
