class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	    // code here
            vector <int> v;
            for(int i=0;i<n;i++)
            {
             v.push_back(arr[i]);
            }
	    sort(v.begin(),v.end());
	    for(int it=n-1;it>=0;it--)
	    {
	        if(v.back()>v[it])
	        {
	            return v[it];
	        }
	       
	    }return -1;
	   
	}
};
