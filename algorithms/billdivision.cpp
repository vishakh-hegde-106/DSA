#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill
 *  2. INTEGER k
 *  3. INTEGER b
 */

void bonAppetit(vector<int> bill, int k, int b) {
    
    void bonAppetit(vector<int> bill, int k, int b) {
    int s = accumulate(bill.begin(), bill.end(), -1 * bill[k]);
    int c = s / 2;
    if(c == b) cout << "Bon Appetit";
    else cout << b - c;
}

}
