class Solution {
public:
    int countDigits(int num) {
        int count=0,y,x=num;

       while(num>0){
        y = num %10;
        if(x%y==0)
        count++;
        num/=10;
       } 
       return count;
    }
};