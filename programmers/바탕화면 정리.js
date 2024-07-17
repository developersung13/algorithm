function solution(wallpaper) {
  var answer = [];
  answer[0] = wallpaper.length;
  answer[1] = wallpaper[0].length;
  answer[2] = answer[3] = 0;

  for (let k = 0; k < wallpaper.length; k++) {
    for (let z = 0; z < wallpaper[k].length; z++) {
      if (wallpaper[k][z] === '.') continue;
      answer[0] = k < answer[0] ? k : answer[0];
      answer[1] = z < answer[1] ? z : answer[1];
      answer[2] = k > answer[2] ? k : answer[2];
      answer[3] = z > answer[3] ? z : answer[3];
    }
  }

  answer[2]++;
  answer[3]++;

  return answer;
}
