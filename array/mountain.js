var longestMountain = function (arr) {
  if (arr.length < 3) {
    return 0;
  }

  let window = [];
  let prev = 0;
  let curr = 0;
  let next = 0;
  let increasing = false;
  let decreasing = false;
  let currMaxMountain = 0;
  for (let i = 1; i < arr.length - 1; i++) {
    prev = arr[i - 1];
    curr = arr[i];
    next = arr[i + 1];
    if (prev < curr && curr > next) {
      window.push(curr);
      let local_curr = arr[i];
      for (let j = i - 1; j >= 0; j--) {
        if (arr[j] < local_curr) {
          local_curr = arr[j];
          window.push(local_curr);
        } else {
          break;
        }
      }
      let local_curr_2 = arr[i];
      for (let z = i + 1; z <= arr.length; z++) {
        if (arr[z] < local_curr_2) {
          local_curr_2 = arr[z];
          window.push(local_curr_2);
        } else {
          break;
        }
      }
      if (currMaxMountain < window.length) {
        currMaxMountain = window.length;
      }
    } else {
      window = [];
    }
  }
  return currMaxMountain;
};
