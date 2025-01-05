/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (haystack, needle) {
  for (let k = 0; k <= haystack.length - needle.length; k++)
    if (haystack.slice(k, k + needle.length) === needle) return k;

  return -1;
};
