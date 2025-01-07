function solution(s) {
  var answer = '';

  let tempArr = s.split(' ');
  tempArr = tempArr.map((word) => {
    let tempWord = word.toLowerCase();
    if (tempWord[0] >= 'a' && tempWord[0] <= 'z')
      return tempWord[0].toUpperCase() + tempWord.slice(1, tempWord.length);
    return tempWord;
  });

  answer = tempArr.join(' ');

  return answer;
}
