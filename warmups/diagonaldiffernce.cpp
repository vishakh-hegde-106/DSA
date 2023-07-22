#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int diagonalDifference(vector<vector<int>> arr) {


int i,j,sum=0,sum2=0,sum3;
  for(i=0;i<arr.size();i++)
   {
       for(j=0;j<arr.size();j++)
       {
           if(i==j)
           sum=sum+arr[i][j];
       }
   }
  

for(int i=0;i<arr.size();i++)
{
    for (int j=0;j<arr.size();j++)
    {
        if(i+j+1==arr.size())
        {
           
            sum2=sum2+arr[i][j];
            
        }
    }
}

sum3=abs(sum-sum2);
return sum3;

}
