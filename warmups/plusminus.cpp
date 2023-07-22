#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



void plusMinus(vector<int> arr) {
    
    int i,c1=0,c2=0,c3=0;
    for(i=0;i<arr.size();i++)
    {
        if(arr[i]>0)
        {
            c1+=1;
        }
        else if(arr[i]<0)
        {
            c2+=1;
        }
        else
        {
            c3+=1;
        }
        
    }
    cout<< (float)c1/arr.size()<<endl;
    cout<<(float)c2/arr.size()<<endl;
    cout<<(float)c3/arr.size()<<endl;
    
}
