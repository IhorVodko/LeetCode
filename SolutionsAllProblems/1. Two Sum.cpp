// problem :  https://leetcode.com/problems/two-sum/description/
// submission : https://leetcode.com/problems/two-sum/submissions/1453436742
// solution post: https://leetcode.com/problems/two-sum/solutions/6047746/c-modern-readable-code-beats-100-time-raking

// #include <vector>
// #include <unordered_map>

class Solution{
public:
    // let n = nums.size(), an input size
    // time complexity O(n)
    // space complexity O(n)
    // Runtime 0 ms, beats 100 %
    // Memory 14.38 MB, beats 36.48 %
    std::vector<int> twoSum(
        std::vector<int> & nums,
        int target
    ){
        if(nums.size() == 2){
            return {0, 1};
        }
        auto numToIndex{std::unordered_map<int, int>{}};
        int diff{0};
        auto secondNumIndex{std::begin(numToIndex)};
        for(int index{0}; index < nums.size(); ++index){
            diff = target - nums.at(index);
            if(numToIndex.contains(diff)){
                return {index, numToIndex.at(diff)};
            }
            numToIndex[nums.at(index)] = index;
        }
        return {-1, -1};
    }
