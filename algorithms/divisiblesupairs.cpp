#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> ar) {

 int result = 0;
    for(int i = 0; i < ar.size() - 1; i++){
        for(int j = i + 1; j < ar.size(); j++){
            if( (ar[i] + ar[j]) % k == 0) result++;
        }
    }
    return result;
}
