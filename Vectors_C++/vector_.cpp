#include <iostream>
#include <vector>
#include <algorithm>


int main(void)
{
    std::vector<int> nums{100,200,300,400,500};

    nums.push_back(600);
    for (auto element : nums)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    nums.erase(std::remove(nums.begin(),nums.end(),300));
    // for (int i = 0;i < nums.size();i++)
    // {
    //     if(nums[i] == 300)
    //     {
    //         std::swap(nums[i],nums[nums.size() - 1]);
    //     }
    // }
    // for (auto element : nums)
    // {
    //     std::cout << element << " ";
    // }
    // std::cout << std::endl;
    // nums.pop_back();
    // for (auto element : nums)
    // {
    //     std::cout << element << " ";
    // }
    // std::cout << std::endl;
    
    std::vector<int>::iterator it;
    for(it = nums.begin();it != nums.end() ; it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    return 0;

}