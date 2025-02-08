class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_tank = 0, current_tank = 0, start = 0;
        int n = gas.size();

        for (int i = 0; i < n; i++) {
            int balance = gas[i] - cost[i];
            total_tank += balance;
            current_tank += balance;
            if (current_tank < 0) {
                start = i + 1;
                current_tank = 0;
            }
        }
        return (total_tank >= 0) ? start : -1;
    }
};
