/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function (n) {
  const result = [];
  for (let k = 1; k <= n; k++) {
    if (k % 15 === 0) result.push('FizzBuzz');
    else if (k % 3 === 0) result.push('Fizz');
    else if (k % 5 === 0) result.push('Buzz');
    else result.push('' + k);
  }
  return result;
};
