function solution(s) {
  var answer = [];

  let leftValue = s;
  let cnt = 0;
  let step = 0;

  while (true) {
    const toRemoveZeroLength = leftValue.split('0').length - 1;
    const afterRemoveZeroLength = leftValue.split('1').length - 1;

    cnt += toRemoveZeroLength;
    answer = [++step, cnt];

    if (afterRemoveZeroLength === 1) break;

    leftValue = afterRemoveZeroLength.toString(2);
  }

  return answer;
}
