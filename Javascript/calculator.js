const add = function(x, y) {
	return x + y;
};

const subtract = function(x, y) {
	return x - y;
};

const sum = function(arr) {
	let arraySum = 0;
  for (let i = 0 ; i < arr.length; ++i) {
    arraySum += arr[i];
  }
  return arraySum;
};

const multiply = function(arr) {
	let arrayProduct = 1;
  for (let i = 0 ; i < arr.length; ++i) {
    arrayProduct *= arr[i];
  }
  return arrayProduct;
};

const power = function(base, power) {
  return Math.pow(base, power);
};

const factorial = function(n) {
	fact = 1;
  for (let i = 2; i <= n; ++i) {
    fact *= i;
  }
  return fact;
};
