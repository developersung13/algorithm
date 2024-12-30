/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function (accounts) {
  let maxWealth = 1;

  for (let k = 0; k < accounts.length; k++) {
    sum = accounts[k].reduce((acc, curr) => {
      return acc + curr;
    }, 0);
    maxWealth = maxWealth < sum ? sum : maxWealth;
  }

  return maxWealth;
};
