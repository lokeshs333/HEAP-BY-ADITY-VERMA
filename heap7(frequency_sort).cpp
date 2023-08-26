// frequency sort
#include <bits/stdc++.h>
using namespace std;
vector<int> frequency_sort(vector<int> &nums, vector<int> &ans)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
        mpp[nums[i]]++;
    priority_queue<pair<int, int>> maxh;
    for (auto it : mpp)
    {
        maxh.push({it.second, it.first});
    }
    while (!maxh.empty())
    {
        auto it = maxh.top();
        maxh.pop();
        while (it.first != 0)
        {
            ans.push_back(it.second);
            it.first--;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 3, 1, 1, 3, 2, 2, 4};
    vector<int> ans;
    vector<int> anss = frequency_sort(nums, ans);
    for (int i = 0; i < anss.size(); i++)
    {
        cout << anss[i] << " ";
    }
    return 0;
}