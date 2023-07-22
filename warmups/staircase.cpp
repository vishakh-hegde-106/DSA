#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


void staircase(int n) {
    
    int i;
    for(i=1;i<=n;i++)
    {
       for(int j=1;j<=n-i;j++)
       {
           cout<<" ";
       }
    
    for(int k=1;k<=i;k++)
    {
        cout<<"#";
    }
        cout<<endl;
    }

}
