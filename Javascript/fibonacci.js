const fibonacci = function(n) {
    if (n < 0) 
        return "OOPS";
    if (typeof(n) === "string")
        n = Number(n);

    let n1 = 0, n2 = 1, sum = 1;
    for (let i = 1; i < n; ++i) {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    return sum;
};