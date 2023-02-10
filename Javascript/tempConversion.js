const convertToCelsius = function(temp) {
  return Math.round((temp - 32) * 5/9 * 10) / 10;
};

const convertToFahrenheit = function(temp) {
  return Math.round((temp * 9/5 + 32) * 10) / 10;
};

  // Alternative
  // let convert = temp * 9/5 + 32;
  // let result = convert.toFixed(1);
  // return parseFloat(result);