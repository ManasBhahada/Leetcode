class Solution {
public:
    bool checkDivisibility(int n) {
        int res=0;
        int res1=1;
        int digit=0;
        int temp=n;
        while(temp>=1){
            digit=temp%10;
            res+=digit;
            res1=res1*digit;
            temp=temp/10;
        }
        int total;
        total=res+res1;
        cout << total << endl;
        if(n%total==0){
            return true;
        }
        else{
        return false;
        }
    }
};