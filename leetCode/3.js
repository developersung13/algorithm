/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  let maxLength = 0;
  let start = 0;
  let charIdxMap = {};

  for (let end = 0; end < s.length; end++) {
    const currentChar = s[end];

    if (currentChar in charIdxMap && charIdxMap[currentChar] >= start)
      start = charIdxMap[currentChar] + 1;

    charIdxMap[currentChar] = end;

    maxLength = Math.max(maxLength, end - start + 1);
  }

  return maxLength;
};
