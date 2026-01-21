#include <iostream>
#include <vector>

int max_sum(std::vector<int> &nums) {
 //TODO
 return -1;

}

int main(){
    std::vector<int> nums = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    int result = max_sum(nums);
    std::cout << "The maximum sum of the subarray is: " << result << std::endl;
    return 0;
}
