class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        
        // Your code goes 
        int sum=0;
        int tn=0;
       for(int i=0;i<n-1;i++)
       {
           sum=sum+array[i];
       }
       for(int i=0;i<n;i++)
       {
           tn=n*(n+1)/2;
       }return tn-sum;
    }
};


