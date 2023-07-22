#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

int c=0,c1=0;
for(int i=0;i<apples.size();i++)
{
    apples[i]=apples[i]+a;
}
for(int i=0;i<oranges.size();i++)
{
    oranges[i]=oranges[i]+b;
}

for(int i=0;i<apples.size();i++)
{
    if(apples[i]>=s && apples[i]<=t)
    {
        c=c+1;
    }
}
for(int i=0;i<oranges.size();i++)
{
   if(oranges[i]<=t && oranges[i]>=s)
   {
       c1=c1+1;
   }
}
cout<<c<<endl<<c1;
}
