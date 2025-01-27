/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
  const strArr = s.split(' ').filter((str) => str !== '');
  return strArr[strArr.length - 1].length;
};
