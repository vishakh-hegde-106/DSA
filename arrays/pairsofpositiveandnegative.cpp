class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
        
        int i;
        vector <int> ans,v;
        map<int,int> mpp;
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
            
                v.push_back(a[i]);
            
            else
            {
                mpp[a[i]]++;
            }
        }
                sort(v.begin(),v.end());
                for(int i=v.size()-1;i>=0;i--)
                {
                    int d=abs(v[i]);
                    if(mpp[d]>0)
                    {
                        ans.push_back(v[i]);
                        ans.push_back(d);
                        mpp[d]--;
                    }
                }
        
        
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
