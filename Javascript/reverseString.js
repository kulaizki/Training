const reverseString = function(string) {
    const array = string.split(""); // splits the characters, split(" ") splits words
    const reverseArray = array.reverse();
    return reverseArray.join(""); // concatenates all characters in the array into one string
};
