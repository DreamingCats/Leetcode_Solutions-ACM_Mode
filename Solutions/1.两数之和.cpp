#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;  // 哈希表存储数及其下标
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hash.count(complement)) {  // 查找哈希表
            return {hash[complement], i};
        }
        hash[nums[i]] = i;  // 将数及其下标存入哈希表
    }
    return {};  // 没有找到符合条件的数
}


int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}

