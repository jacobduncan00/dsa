function maxSubArray(arr) {
  let maxCurrent = arr[0];
  let maxGlobal = arr[0];
  for (let i = 1; i < arr.length - 1; i++) {
    maxCurrent = Math.max(arr[i], maxCurrent + arr[i]);
    if (maxCurrent > maxGlobal) maxGlobal = maxCurrent;
  }
  return maxGlobal;
}

function main() {
  let l = [-2, 3, 2, -1];
  let res = maxSubArray(l);
  console.log(res);
}

main();
