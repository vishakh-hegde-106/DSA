int sockMerchant(int n, vector<int> ar) {
    map<int, int> mp;
    int result = 0;
    for(int i = 0; i < ar.size(); i++){
        if(mp[ar[i]]){
            result++;
            mp.erase(ar[i]);
            continue;
        }
        mp[ar[i]]++;
    }
    return result;
}
