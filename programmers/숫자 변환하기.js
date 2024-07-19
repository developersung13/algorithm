function solution(x, y, n) {
    var answer = 0;
    
    const que = [[y, 0]];
    
    while (que.length) {
        const [num, steps] = que.shift();
        
        if (num === x) return steps;
        
        if (num % 2 === 0 && num / 2 >= x) que.push([num / 2, steps + 1]);
        if (num % 3 === 0 && num / 3 >= x) que.push([num / 3, steps + 1]);
        if (num - n >= x) que.push([num - n, steps + 1]);
    }

    return -1;
}