/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = function (nums) {
  const numMap = {};
  const res = [];

  for (const num of nums) {
    if (num in numMap) numMap[num]++;
    else numMap[num] = 1;
  }

  for (const key in numMap) if (numMap[key] === 2) res.push(parseInt(key));

  return res;
};
