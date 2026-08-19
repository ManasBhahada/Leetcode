class Solution {
public:
    int reverse(int x) {
        if(x>0){
            int n=0;
            long long ans=0;
            while(x%(long long)pow(10,n)!=x){
                n++;
            }
            for(int i=1;i<=n;i++){
                ans+=round((x%(long long)pow(10,i))*(pow(10,n-((2*i)-1))));
                x-=(x%(long long)pow(10,i));
            }
            if(ans <= INT_MAX) return ans;
        }
        else if(x<0){
            if(x == INT_MIN) return 0;
            x=(-1)*x;
            int n=0;
            long long ans=0;
            while(x%(long long)pow(10,n)!=x){
                n++;
            }
            for(int i=1;i<=n;i++){
                ans+=round((x%(long long)pow(10,i))*(pow(10,n-((2*i)-1))));
                x-=(x%(long long)pow(10,i));
            }
            ans=(-1)*ans;
            if(ans >= INT_MIN) return ans;
        }
        return 0;
    }
};