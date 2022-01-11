/*
    Author: DF
    Print the Nth Finonacci Number.
    No bits.
    Use basic data-type only
*/
#include <iostream>
#include <cmath>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define el   '\n'


void solveMyProblem(istream &cin, ostream &cout) {
    int n;
    cin >> n;
    double phi = (1 + sqrt(5)) / 2;
    cout << (int)round(pow(phi, n) / sqrt(5)) << el;
}

int32_t main() {
    FastIO;
    istream &in(cin);
    ostream &out(cout);
    solveMyProblem(in, out);
}
