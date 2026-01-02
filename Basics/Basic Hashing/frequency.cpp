#include <bits/stdc++.h>
using namespace std;

int main() {

    int inparr[] = {2,4,6,4,2,1,3,6,5};

    int n = sizeof(inparr) / sizeof(inparr[0]);

    int hashin[9] = {0};   // initialize to zero

    for(int i = 0; i < n; i++){
        hashin[inparr[i]]++;
    }

    for(int j = 0; j < 9; j++){
        cout << hashin[j] << endl;
    }

    return 0;
}
