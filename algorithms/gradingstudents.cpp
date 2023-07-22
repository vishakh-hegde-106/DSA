#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



vector<int> gradingStudents(vector<int> grades) {
    for(int i=0; i<grades.size();i++)
    {
        if((grades[i]+1)%5==0 && grades[i]+1 >=40)
        {
            grades[i]=grades[i]+1;
        }
        else if((grades[i]+2)%5==0 && grades[i]+2 >=40)
        {
            grades[i]=grades[i]+2;
        }
            
    }
        
    
return grades;
}
