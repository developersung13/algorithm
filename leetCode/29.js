/**
 * @param {number} dividend
 * @param {number} divisor
 * @return {number}
 */
var divide = function (dividend, divisor) {
  const result = parseInt(dividend / divisor);

  if (Math.pow(2, 31) - 1 < result) return result - 1;

  return parseInt(dividend / divisor);
};
