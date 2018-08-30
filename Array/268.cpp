/*
268. Missing Number

Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

Example 1:

Input: [3,0,1]
Output: 2
Example 2:

Input: [9,6,4,2,3,5,7,0,1]
Output: 8
Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?
*/

#include <vector>
#include <iostream>
using namespace std;

// ��ֱ��˼·�ǹ���һ���ֵ䣬keyΪ0-n, valueΪbool��ʾ�Ƿ����
// ����Ҫ�����ռ䡣
// ˼·������0-n֮�ͣ���ȥ��ǰ����֮�ͣ���ֵΪȱʧֵ�����Ӷ�o(n)������ռ�o(1)
int missingNumber(vector<int>& nums) {
    int target_sum = nums.size() * (nums.size() + 1) / 2;
    for (int i = 0; i < nums.size(); i++){
        target_sum -= nums[i];
    }
    return target_sum;
}

int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout << missingNumber(nums);
    return 0;
}