class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0,high=0,res=-1,k=2;
        unordered_map<int,int>f;
        for(high=0;high<fruits.size();high++)
        {
            f[fruits[high]]++;
            while(f.size()>k)
            {
                f[fruits[low]]--;
                if(f[fruits[low]]==0)
                {
                    f.erase(fruits[low]);
                }
                low++;
            }
            if(f.size()==k || f.size()<k)
            {
                int len = high-low+1;
                res = max(res,len);
            }
        }
        return res;
    }
};