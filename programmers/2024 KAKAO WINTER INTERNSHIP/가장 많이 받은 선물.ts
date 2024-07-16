function solution(friends: string[], gifts: string[]): number {
  var answer = 0;

  const friendsNum: number = friends.length;

  let giveAndTakesCountArr: number[][] = Array.from(
    { length: friendsNum },
    () => Array(friendsNum).fill(0)
  );

  for (let k = 0; k < gifts.length; k++) {
    const namesArray: string[] = gifts[k].split(' ');
    const giverIdx: number = friends.indexOf(namesArray[0]);
    const receiverIdx: number = friends.indexOf(namesArray[1]);

    giveAndTakesCountArr[giverIdx][receiverIdx]++;
  }

  let giftPointsArr: number[] = Array(friendsNum).fill(0);

  const rowSums: number[] = giveAndTakesCountArr.map((row) =>
    row.reduce((acc, value) => acc + value, 0)
  );
  const colSums: number[] = giveAndTakesCountArr[0].map((_, colIndex) =>
    giveAndTakesCountArr.reduce((acc, row) => acc + row[colIndex], 0)
  );

  for (let k = 0; k < friendsNum; k++)
    giftPointsArr[k] = rowSums[k] - colSums[k];

  let giftCountArr: number[] = Array(friendsNum).fill(0);

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
