/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function (nums, target) {
  let findIdx = nums.findIndex((num) => num === target);
  if (findIdx !== -1) return findIdx;

  const numArr = nums;

  let k = 0;

  for (k = 0; k < nums.length; k++) {
    if (numArr[k] >= target) {
      return k;
    }
  }

  return k;
};
