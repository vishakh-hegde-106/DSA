#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
    
    int a = abs(x-z), b = abs(y-z);
    if(a==b) return "Mouse C";
    if(a < b) return "Cat A";
    return "Cat B";
}
