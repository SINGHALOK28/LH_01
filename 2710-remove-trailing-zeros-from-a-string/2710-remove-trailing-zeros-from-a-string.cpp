class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.size();
        int count = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(num[i] == '0'){
            count++;
        }
        else
            break;
        }
        
    while(count--)
    {
        num.pop_back();
    }

    
    return num;

        // while(i--)
        // {
        //     while
        // }
    }
};