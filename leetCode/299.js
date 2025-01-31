/**
 * @param {string} secret
 * @param {string} guess
 * @return {string}
 */
var getHint = function (secret, guess) {
  const secretMap = {},
    guessMap = {};
  let bullCnt = 0,
    cowCnt = 0;

  for (let k = 0; k < secret.length; k++) if (secret[k] === guess[k]) bullCnt++;

  for (const num of secret) {
    if (num in secretMap) secretMap[num]++;
    else secretMap[num] = 1;
  }

  for (const num of guess) {
    if (num in guessMap) guessMap[num]++;
    else guessMap[num] = 1;
  }

  for (const key in secretMap)
    if (secretMap[key] > 0 && guessMap[key] > 0)
      cowCnt += Math.min(secretMap[key], guessMap[key]);

  return `${bullCnt}A${cowCnt - bullCnt}B`;
};
