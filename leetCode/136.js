/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {
  const numMap = {};

  for (const num of nums) {
    if (num in numMap) numMap[num]++;
    else numMap[num] = 1;
  }

  for (const key in numMap) {
    if (numMap[key] === 1) return parseInt(key);
  }
};
