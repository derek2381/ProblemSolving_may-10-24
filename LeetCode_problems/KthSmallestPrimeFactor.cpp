// problem link
// https://leetcode.com/problems/k-th-smallest-prime-fraction/description/?envType=daily-question&envId=2024-05-10



class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int,int>>>, greater<pair<double, pair<int, int>>>> pq;
        int n = arr.size();

        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                double fraction = static_cast<double>(arr[i]) / arr[j];
                pq.push({fraction, {arr[i], arr[j]}});
            }
        }

        pair<int, int> res = pq.top().second;
        while(--k) {
            pq.pop();
            res = pq.top().second;
        }

        return {res.first, res.second};
    }
};
