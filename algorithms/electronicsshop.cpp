#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
      int n;
     vector<int> s;
     
     for(int i = 0; i<keyboards.size();i++){
         for(int j = 0; j<drives.size();j++){
             s.push_back(keyboards[i]+drives[j]);
         }
     }
    sort(s.begin(),s.end());
    n = s.size();
    if(s[0]>b){
        return -1;
    }
    else if(s[n-1]<=b){
        return s[n-1];
    }
    else{
        for(int i = 0; i<s.size(); i++){
            if(s[i]>b){
                return s[i-1];
            }
        }
    }
    return 0;
}
