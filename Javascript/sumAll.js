const sumAll = function(start, end) {
    if (start < 0 || end < 0 || isNaN(start) || isNaN(end) || 
        typeof(start) != "number" || typeof(end) != "number")
            return "ERROR";

    let sum = 0;
    let i = start;
    let n = end;

    if (start > end) {
        i = end;
        n = start;
    }

    for (;i <= n; i++) {
        sum += i
    }

    return sum;
};