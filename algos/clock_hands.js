function getDegree(hour, minute) {
  let h = hour * 30;
  let m = minute * 6;

  let deg = Math.abs(h - m);
  if (deg > 180) deg = 360 - deg;
  return deg;
}

function main() {
  let hour = 12;
  let minute = 05;
  console.log(`Degree between hands at 6:09 is ${getDegree(hour, minute)}`);
}

main();
