class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    //     long long num = 0;
    //     for (int x : digits) {
    //     num = num * 10 + x;
    // }
    //  num = num+1;
    // vector<int> result;
    // string s = to_string(num);
    // for (char c : s) {
    //     result.push_back(c - '0');
    // }
    //     return result;


    int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        // agar sab 9 the
        digits.insert(digits.begin(), 1);
        return digits;    

        }
};