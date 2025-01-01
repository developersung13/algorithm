/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
  const limit = 2 ** 31;
  const isNegative = x < 0;

  const reversed = parseInt(String(Math.abs(x)).split('').reverse().join(''));

  if (reversed >= limit) return 0;
  return isNegative ? -reversed : reversed;
};
