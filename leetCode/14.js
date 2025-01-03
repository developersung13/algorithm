/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  if (strs.length === 0) return '';

  let prefix = strs[0];

  for (let k = 1; k < strs.length; k++) {
    while (strs[k].indexOf(prefix) !== 0) {
      prefix = prefix.slice(0, -1);
      if (prefix === '') return '';
    }
  }

  return prefix;
};
