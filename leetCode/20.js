/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  let aCnt = 0,
    bCnt = 0,
    cCnt = 0;
  let lastOpenedType = [];

  for (char of s) {
    aCnt = char === '(' ? aCnt + 1 : char === ')' ? aCnt - 1 : aCnt;
    bCnt = char === '{' ? bCnt + 1 : char === '}' ? bCnt - 1 : bCnt;
    cCnt = char === '[' ? cCnt + 1 : char === ']' ? cCnt - 1 : cCnt;

    if (char === '(') lastOpenedType.push('(');
    else if (char === '{') lastOpenedType.push('{');
    else if (char === '[') lastOpenedType.push('[');

    if (char === ')') {
      if (lastOpenedType[lastOpenedType.length - 1] === '(') {
        lastOpenedType.pop();
      } else return false;
    } else if (char === '}') {
      if (lastOpenedType[lastOpenedType.length - 1] === '{') {
        lastOpenedType.pop();
      } else return false;
    } else if (char === ']') {
      if (lastOpenedType[lastOpenedType.length - 1] === '[') {
        lastOpenedType.pop();
      } else return false;
    }

    if (aCnt < 0 || bCnt < 0 || cCnt < 0) return false;
  }

  return aCnt === 0 && bCnt === 0 && cCnt === 0 ? true : false;
};
