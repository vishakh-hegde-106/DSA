#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


void miniMaxSum(vector<int> arr) {
    long i,j,n;
    long t,min=0,max=0;
    for(i=0;i<arr.size();i++)
    {
        for(j=i+1;j<arr.size();j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=0;i<arr.size()-1;i++)
    {
      min=min+arr[i];
    }
    for(i=arr.size();i>0;i--)
    {
        max=max+arr[i];
    }
    cout<<min<<" "<<max;
}
