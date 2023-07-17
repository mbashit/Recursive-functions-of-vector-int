// Recursive functions of vector int.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <vector>
#include <cstdlib>   // Include this header for std::atoi

int ListSum(std::vector<int>& nums, int index = 0) {
    if (index >= nums.size()) {
        return 0;
    }
    return nums[index] + ListSum(nums, index + 1);
}

int main(int argc, char** argv) {
    std::vector<int> nums;
    for (int i = 1; i < argc; i++) {
        nums.push_back(std::atoi(argv[i])); // Use std::atoi instead of std::stoi
    }
    std::cout << ListSum(nums) << std::endl;
    return 0;
}
