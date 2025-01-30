/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
  const res = [];
  let tempK = k,
    numIdx = 0;

  if (tempK > nums.length) tempK %= nums.length;

  for (let i = 0; i < nums.length; i++) {
    if (tempK > 0) res.push(nums[nums.length - tempK--]);
    else res.push(nums[numIdx++]);
  }

  for (let k = 0; k < nums.length; k++) nums[k] = res[k];
};
