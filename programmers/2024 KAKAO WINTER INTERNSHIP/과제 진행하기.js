function solution(plans) {
    var answer = [];
    var pausedTasks = [];
    
    for (let k = 0; k < plans.length; k++) {
      const [hours, minutes] = plans[k][1].split(':').map(Number);
      plans[k][1] = hours * 60 + minutes;
      plans[k][2] = parseInt(plans[k][2]);
    }
    
    plans.sort((a, b) => a[1] - b[1]);

    let currentTime = plans[0][1];
    
    for (let k = 0; k < plans.length; k++) {
      let [name, startTime, duration] = plans[k];
      
      if (k > 0) {
        let timeDiff = startTime - currentTime;
        
        while (timeDiff > 0 && pausedTasks.length > 0) {
          let [pausedName, pausedDuration] = pausedTasks.pop();
          
          if (timeDiff >= pausedDuration) {
            currentTime += pausedDuration;
            answer.push(pausedName);
            timeDiff -= pausedDuration;
          } else {
            pausedTasks.push([pausedName, pausedDuration - timeDiff]);
            currentTime += timeDiff;
            timeDiff = 0;
          }
        }
        
        currentTime = startTime;
      }

      if (k < plans.length - 1) {
        let nextStartTime = plans[k + 1][1];
        if (currentTime + duration > nextStartTime) {
          pausedTasks.push([name, duration - (nextStartTime - currentTime)]);
          currentTime = nextStartTime;
        } else {
          currentTime += duration;
          answer.push(name);
        }
      } else {
        currentTime += duration;
        answer.push(name);
      }
    }
    
    while (pausedTasks.length > 0) {
      let [pausedName, pausedDuration] = pausedTasks.pop();
      currentTime += pausedDuration;
      answer.push(pausedName);
    }
    
    return answer;
}