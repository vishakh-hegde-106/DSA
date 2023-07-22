#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

long aVeryBigSum(vector<long> ar) {

long sum=0;
for(int i=0;i<ar.size();i++)
{
    sum+=ar[i];
}
return sum;
}
