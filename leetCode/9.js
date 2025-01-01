/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  const xStrArr = String(x).split('');
  xStrArrLength = xStrArr.length;

  const expandAroundCenter = (left, right) => {
    while (
      left >= 0 &&
      right < xStrArrLength &&
      xStrArr[left] === xStrArr[right]
    ) {
      left--;
      right++;
    }

    return right - left - 1 === xStrArrLength;
  };

  if (xStrArrLength % 2 === 0)
    return expandAroundCenter(xStrArrLength / 2 - 1, xStrArrLength / 2);

  return expandAroundCenter(
    Math.floor(xStrArrLength / 2),
    Math.floor(xStrArrLength / 2)
  );
};
