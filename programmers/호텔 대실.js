function solution(book_time) {
  const roomSchedules = [];

  for (let k = 0; k < book_time.length; k++) {
    const [startHours, startMinutes] = book_time[k][0].split(':').map(Number);
    const [endHours, endMinutes] = book_time[k][1].split(':').map(Number);
    book_time[k][0] = startHours * 60 + startMinutes;
    book_time[k][1] = endHours * 60 + endMinutes;
  }

  book_time.sort((a, b) => a[0] - b[0]);

  roomSchedules.push([book_time[0]]);

  for (let k = 1; k < book_time.length; k++) {
    let isAssigned = false;
    for (let z = 0; z < roomSchedules.length; z++) {
      if (
        roomSchedules[z][roomSchedules[z].length - 1][1] + 10 <=
        book_time[k][0]
      ) {
        roomSchedules[z].push(book_time[k]);
        isAssigned = true;
        break;
      }
    }

    if (!isAssigned) roomSchedules.push([book_time[k]]);
  }

  return roomSchedules.length;
}
