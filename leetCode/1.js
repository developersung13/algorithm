/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  const numMap = {};

  for (let k = 0; k < nums.length; k++) {
    const complement = target - nums[k];
    if (complement in numMap) return [numMap[complement], k];

    numMap[nums[k]] = k;
  }
};
