/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function (ransomNote, magazine) {
  const ALPHABET_NUMS = 26;
  const ransomNoteAlphaNums = new Array(ALPHABET_NUMS).fill(0);
  const magazineAlphaNums = new Array(ALPHABET_NUMS).fill(0);

  for (let k = 0; k < ransomNote.length; k++)
    ransomNoteAlphaNums[ransomNote.charCodeAt(k) - 'a'.charCodeAt(0)]++;

  for (let k = 0; k < magazine.length; k++)
    magazineAlphaNums[magazine.charCodeAt(k) - 'a'.charCodeAt(0)]++;

  for (let k = 0; k < ALPHABET_NUMS; k++)
    if (ransomNoteAlphaNums[k] > magazineAlphaNums[k]) return false;

  return true;
};
