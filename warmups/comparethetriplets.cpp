#include <bits/stdc++.h>

using namespace std;




vector<int> compareTriplets(vector<int> a, vector<int> b) {
    
    int c1=0,c2=0;
    vector<int> v;
    int i,j;
    for(i=0;i<a.size();i++)
    {
       
            if(a[i]>b[i])
            {
                c1++;
            }
            else if(b[i]>a[i])
            {
                c2++;
            }
        }
    
    
    v={c1,c2};
   
    


return v;
}
