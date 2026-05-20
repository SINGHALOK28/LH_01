class Solution {
public:
    int countSeniors(vector<string>& details) {
            int count=0;

        for(int i=0;i<details.size();i++)
        {
            string s=details[i].substr(11,2);
            int num=stoi(s);
            if(num>60)
            {
                count++;
            }
        }
        return count;

        // vector<string> res;
        // for(int i=0;i<details.size()-1;i++)
        // {
        //     string s = details[i].substr(11,2);
        //     int num = stoi(s);
        //     if(num>60)
        //      {
        //         string str =to_string(num);
        //         res.push_back(str);
        //      }

        // }
        // return res.size();
    }
};