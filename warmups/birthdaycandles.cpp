#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int birthdayCakeCandles(vector<int> candles) {
    
    int i,max=0,c=0;
    for(i=0;i<candles.size();i++)
    {
        if(candles[i]>max)
        {
            max=candles[i];
            c=1;
        }
        else if(candles[i]==max) 
        {
           
            c++;
           
        
        }
    }
   return c;
    
}
