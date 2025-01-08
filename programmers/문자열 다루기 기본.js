function solution(s) {
  const sLength = s.length;

  if (sLength !== 4 && sLength !== 6) return false;

  for (let k = 0; k < sLength; k++)
    if ((s[k] >= 'a' && s[k] <= 'z') || (s[k] >= 'A' && s[k] <= 'Z'))
      return false;

  return true;
}
