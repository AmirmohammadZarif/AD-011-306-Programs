// Created by @amirmohammadzarif
// Thursday, Oct 20, 2022
#include <iostream>
using namespace std;

int main() {
    int counter = 0;

    for(int m = 1; m <= 4; m++){
        for(int n = m; n <= 4; n++){
            for(int k = m; k <= n; k++){
                counter++;
                cout << "Test" << endl;
                cout << m << " " << n << " " << k << endl;
            }
        }
    }
    cout << counter;
    return 0;
}

// Answer
// T(n) = (n * (n - 1)) / 2
