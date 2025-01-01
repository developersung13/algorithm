/**
 * @param {string} s
 * @return {string}
 */

var longestPalindrome = function (s) {
  let start = 0;
  let end = 0;

  const expandAroundCenter = (left, right) => {
    while (left >= 0 && right < s.length && s[left] === s[right]) {
      left--;
      right++;
    }

    return right - left - 1;
  };

  for (let k = 0; k < s.length; k++) {
    const oddCaseLength = expandAroundCenter(k, k);
    const evenCaseLength = expandAroundCenter(k, k + 1);

    const greaterLen = Math.max(oddCaseLength, evenCaseLength);

    if (greaterLen > end - start) {
      start = k - Math.floor((greaterLen - 1) / 2);
      end = k + Math.floor(greaterLen / 2);
    }
  }

  return s.slice(start, end + 1);
};
