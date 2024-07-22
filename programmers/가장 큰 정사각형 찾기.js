function solution(board) {
  let maxSideLen = 0;
  const rows = board.length;
  const cols = board[0].length;

  const dp = Array.from(Array(rows), () => Array(cols).fill(0));

  for (let k = 0; k < rows; k++) {
    dp[k][0] = board[k][0];
    maxSideLen = Math.max(maxSideLen, dp[k][0]);
  }

  for (let z = 0; z < cols; z++) {
    dp[0][z] = board[0][z];
    maxSideLen = Math.max(maxSideLen, dp[0][z]);
  }

  for (let k = 1; k < rows; k++)
    for (let z = 1; z < cols; z++)
      if (board[k][z] === 1) {
        dp[k][z] = Math.min(dp[k - 1][z], dp[k][z - 1], dp[k - 1][z - 1]) + 1;
        maxSideLen = Math.max(maxSideLen, dp[k][z]);
      }

  return maxSideLen * maxSideLen;
}
