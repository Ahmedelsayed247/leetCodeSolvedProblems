class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q ;  
        for (int i = 0 ; i<stones.size() ; i++) {
            q.push(stones[i]) ;
        }
        while (q.size() > 1) {
            int top1 = q.top() ;q.pop() ;
            int top2 = q.top() ;q.pop() ;
            if(top1 != top2) q.push(top1-top2);
            
        }
        return q.empty()?0:q.top();
    }
};