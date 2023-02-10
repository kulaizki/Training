const palindromes = function (str) {
  let lowercaseStr = str.toLowerCase().replace(/[^a-z]/g, "");
  return lowercaseStr === lowercaseStr.split("").reverse().join("");
};

// Alternative
// let lowercaseStr = str.toLowerCase();
// let charactersArr = lowercaseStr.split("");
// let validCharacters = "abcdefghijklmnopqrstuvwxyz".split("");

// let lettersArr = [];
// charactersArr.forEach((char) => {
//   if (validCharacters.indexOf(char) > -1) lettersArr.push(char);
// });

// return lettersArr.join("") === lettersArr.reverse().join("");
