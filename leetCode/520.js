/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function (word) {
  let isAllCapital = true,
    isAllLower = true,
    isAllLowerExcludingFirst = true;
  let isFirstCapital = word[0] >= 'A' && word[0] <= 'Z' ? true : false;

  for (let k = 0; k < word.length; k++)
    if (word[k] >= 'a' && word[k] <= 'z') {
      isAllCapital = false;
      break;
    }

  for (let k = 0; k < word.length; k++)
    if (word[k] >= 'A' && word[k] <= 'Z') {
      isAllLower = false;
      break;
    }

  for (let k = 1; k < word.length; k++)
    if (word[k] >= 'A' && word[k] <= 'Z') {
      isAllLowerExcludingFirst = false;
      break;
    }

  return isAllCapital ||
    isAllLower ||
    (isFirstCapital && isAllLowerExcludingFirst)
    ? true
    : false;
};
