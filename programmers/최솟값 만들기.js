function solution(A, B) {
  var answer = 0;

  A.sort((a, b) => a - b);
  B.sort((a, b) => b - a);

  for (let k = 0; k < A.length; k++) answer += A[k] * B[k];

  return answer;
}
