class Solution {
public:
    int ssd(int x){
        int sum=0;
        while(x>0){
            sum += (x%10)*(x%10);
            x/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
		int cnt=0;
		while(n!=1 && cnt<1000){
			n=ssd(n);
			cnt++;
	    }
         return (n==1);
    }
};