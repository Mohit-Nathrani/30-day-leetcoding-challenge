class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i=0;i<stones.size();i++) q.push(stones[i]);
        
        while(q.size()>1){
            int s1 = q.top(); q.pop();
            int s2 = q.top(); q.pop();
            
            if(s1==s2) continue;
            q.push(abs(s1-s2));
        }
        if(q.size()==1) return q.top();
        return 0;
    }
};