/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function (s) {
  const alphabetCnt = new Array(26).fill(0);

  for (char of s) alphabetCnt[char.charCodeAt(0) - 'a'.charCodeAt(0)]++;

  let k = 0;

  for (char of s) {
    if (alphabetCnt[char.charCodeAt(0) - 'a'.charCodeAt(0)] === 1) return k;
    k++;
  }

  return -1;
};
