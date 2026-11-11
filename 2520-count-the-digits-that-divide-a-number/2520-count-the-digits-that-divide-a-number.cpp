class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int r;
        int val=num;
       while(num){
         r=num%10;
        if(val%r==0){
            count++;
        }
        num=num/10;
       } 
       return count;
    }
};