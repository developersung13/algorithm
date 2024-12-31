/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {
  const mergedArr = [...nums1, ...nums2].sort((a, b) => a - b);
  const mergedArrLen = mergedArr.length;

  if (mergedArrLen % 2 === 0)
    return (mergedArr[mergedArrLen / 2 - 1] + mergedArr[mergedArrLen / 2]) / 2;

  return mergedArr[parseInt(mergedArrLen / 2)];
};
