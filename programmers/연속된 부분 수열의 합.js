function solution(sequence, n) {
  let answer = [sequence.length, -1];
  let left = 0;
  let right = 0;
  let subSeqTotal = sequence[0];

  while (right < sequence.length) {
    if (subSeqTotal === n) {
      if (right - left < answer[1] - answer[0] || answer[1] === -1) {
        answer[0] = left;
        answer[1] = right;
      }
      subSeqTotal -= sequence[left];
      left++;
    } else if (subSeqTotal < n) {
      right++;
      if (right < sequence.length) subSeqTotal += sequence[right];
    } else {
      subSeqTotal -= sequence[left];
      left++;
    }
  }

  return answer;
}
