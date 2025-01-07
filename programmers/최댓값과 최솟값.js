function solution(s) {
  var answer = '';

  const numArr = s.split(' ').map(Number);
  const min = Math.min(...numArr);
  const max = Math.max(...numArr);

  answer = `${min} ${max}`;

  return answer;
}
