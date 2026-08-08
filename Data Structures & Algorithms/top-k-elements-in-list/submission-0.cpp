class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> bucket(nums.size()+1);

        unordered_map<int,int> mpp;

        for(int n:nums)
        {
            mpp[n]++;
        }

        for(auto &it : mpp)
        {
            int key=it.first;
            int frequency=it.second;
            bucket[frequency].push_back(key);
        }

        vector<int> topK;

        for(int pos=bucket.size()-1;pos>=0 && topK.size() < k;pos--){
            for(int num: bucket[pos])
            {
                topK.push_back(num);

                if(topK.size()==k)
                break;
            }
        }
        return topK;
    

        
    }
};
