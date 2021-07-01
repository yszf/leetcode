/*
    问题描述：
    给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素最多出现k次 ，返回删除后数组的新长度。不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
*/

#include <iostream>
#include <vector>

using namespace std;

int RemoveDuplicates(vector<int>& nums, int k) {
    if (nums.empty()) return 0;

    int i = 0;
    for(int x : nums){
        if(i < k || nums[i - k] != x){
            nums[i++] = x;
        }
    }
    return i + 1;
}

void PrintArray(vector<int>& nums, int len) {
    for (int i = 0; i < len; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    PrintArray(nums, nums.size());

    int len = RemoveDuplicates(nums, 1);
    PrintArray(nums, len);

    return 0;
}


