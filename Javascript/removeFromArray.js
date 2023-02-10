const removeFromArray = function(array, ...args) {
    return array.filter(value => !args.includes(value));
};
