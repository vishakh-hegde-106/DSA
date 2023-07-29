class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() !=t.size())
        {
            return false;
        }
         unordered_map<int,int> smap;
         unordered_map<int,int> tmap;

         for(int i=0;i<s.size();i++)
         {
             smap[s[i]]++;
             tmap[t[i]]++;
         }
         for(int i=0;i<smap.size();i++)
         {
             if(smap[i] != tmap[i])
             {
             
                    return false;
             }
         }return true;

   
    }
};


//alternative method

class Solution {
public:
    bool isAnagram(string s, string t) {

 sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s==t;
    }
};
