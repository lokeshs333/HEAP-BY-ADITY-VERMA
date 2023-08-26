#include<bits/stdc++.h>
using namespace std;

int minimum_cost(vector<int>& nums) {
    priority_queue<int, vector<int>, greater<int>> minh;
    for (int i = 0; i < nums.size(); i++)
        minh.push(nums[i]);
    
    int cost = 0; 
    while (minh.size() > 1) {
        int a = minh.top();
        minh.pop();
        int b = minh.top();
        minh.pop();
        cost += a + b;
        minh.push(a + b);
    }
    return cost;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int ans = minimum_cost(nums);
    cout << ans;
    return 0;
}
