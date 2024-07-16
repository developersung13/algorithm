function solution(friends, gifts) {
  var answer = 0;

  const friendsNum = friends.length;

  let giveAndTakesCountArr = Array.from({ length: friendsNum }, () =>
    Array(friendsNum).fill(0)
  );

  for (let k = 0; k < gifts.length; k++) {
    const namesArray = gifts[k].split(' ');
    const giverIdx = friends.indexOf(namesArray[0]);
    const receiverIdx = friends.indexOf(namesArray[1]);

    giveAndTakesCountArr[giverIdx][receiverIdx]++;
  }

  let giftPointsArr = Array(friendsNum).fill(0);

  const rowSums = giveAndTakesCountArr.map((row) =>
    row.reduce((acc, value) => acc + value, 0)
  );
  const colSums = giveAndTakesCountArr[0].map((_, colIndex) =>
    giveAndTakesCountArr.reduce((acc, row) => acc + row[colIndex], 0)
  );

  for (let k = 0; k < friendsNum; k++)
    giftPointsArr[k] = rowSums[k] - colSums[k];

  let giftCountArr = Array(friendsNum).fill(0);

  for (let k = 0; k < friendsNum; k++) {
    for (let z = 0; z < friendsNum; z++) {
      if (k === z) continue;

      if (
        giveAndTakesCountArr[k][z] > giveAndTakesCountArr[z][k] ||
        (((giveAndTakesCountArr[k][z] === 0 &&
          giveAndTakesCountArr[z][k] === 0) ||
          giveAndTakesCountArr[k][z] === giveAndTakesCountArr[z][k]) &&
          giftPointsArr[k] > giftPointsArr[z])
      )
        giftCountArr[k]++;
    }
  }

  answer = Math.max(...giftCountArr);

  return answer;
}
