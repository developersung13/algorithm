function solution(n) {
  let prev = 0,
    curr = 1;

  for (let k = 2; k <= n; k++) {
    const next = (prev + curr) % 1234567;
    prev = curr;
    curr = next;
  }

  return curr;
}
