function solution(dartResult) {
    let arr = dartResult.split(""), result = 0, cnt = 0, answer;
    console.log(arr);
    
    for(let i = 0; i < arr.length - 1; i++) {
        let now = arr[i], next = arr[i + 1];
        
        if(next === "S" || next === "D" || next === "T") {
            if(next === "D") {
                now = now**2;
                cnt++;
            }
            else if(next === "T") {
                now = now**3;
                cnt++;
            }
        }
        
        if(cnt >= 1) {
            if(arr[i] == "*") {
                answer[length - 2] *= 2;
                answer[length - 1] *= 2;
            }
        } else {
            if(arr[i] == "*") {
                answer[length - 1] *= 2;
            }
        }
        
        Number(now);
        if((typeof now) === (typeof 1)) {
            answer.push(now);
        }
    }
    
    return result;
}