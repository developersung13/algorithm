/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
  const numMap = {};

  for (const num of nums) {
    if (num in numMap && numMap[num] === 1) return true;
    else numMap[num] = 1;
  }

  return false;
};
