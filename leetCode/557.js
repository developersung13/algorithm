/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function (s) {
  const words = s.split(' ');
  let res = '';

  for (let k = 0; k < words.length; k++) {
    res += words[k].split('').reverse().join('');
    res += ' ';
  }

  return res
    .split('')
    .splice(0, res.length - 1)
    .join('');
};
