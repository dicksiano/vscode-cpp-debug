#include <bits/stdc++.h>
using namespace std;

void arrange(vector<int> &A) {
    A[0] = 0;
    A[1] = 1;
    A[2] = 2;
    A[3] = 3;
    A[4] = 4;
}

int main() {
    vector<int> v;
    v.push_back(4);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    arrange(v);
    return 0;
}