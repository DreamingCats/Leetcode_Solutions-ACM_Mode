#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;  // ��ϣ��洢�������±�
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hash.count(complement)) {  // ���ҹ�ϣ��
            return {hash[complement], i};
        }
        hash[nums[i]] = i;  // ���������±�����ϣ��
    }
    return {};  // û���ҵ�������������
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

