class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int totalGas = 0 , totalCost = 0 ,  gs=0 , idx=0 ;
     for (int i = 0 ;i<gas.size() ; ++i){
        totalGas += gas[i] ;
        totalCost +=cost[i] ;

        gs = gs + gas[i] - cost[i] ;

        if (gs < 0) {
            idx = i +1 ;
            gs = 0 ;
        }
     }
     return (totalGas < totalCost )? -1 : idx; 

    }
};