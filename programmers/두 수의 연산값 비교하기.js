function solution(a, b) {
  var answer = 0;

  const leftHanded = parseInt(String(a) + String(b));
  const rightHanded = 2 * a * b;

  if (leftHanded >= rightHanded) answer = leftHanded;
  else if (leftHanded < rightHanded) answer = rightHanded;

  return answer;
}
