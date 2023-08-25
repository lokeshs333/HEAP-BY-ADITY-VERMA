#include <bits/stdc++.h>
using namespace std;
vector<int> k_closest(vector<int> nums, int x, int k)
{
    vector<int> ans;

    priority_queue<pair<int, int>> maxh;
    for (int i = 0; i < nums.size(); i++)
    {
        maxh.push({abs(nums[i] - x), nums[i]});
        if (maxh.size() > k)
            maxh.pop();
    }

    while (!maxh.empty())
    {
        ans.push_back(maxh.top().second);
        maxh.pop();
    }
    return ans;
}
int main()
{
    vector<int> nums = {5, 6, 7, 8, 9};
    int x = 7;
    int k = 3;
    vector<int> ans = k_closest(nums, x, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}