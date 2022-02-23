function canFormPalindrome(str) {
  let counter = {};
  for (let i = 0; i < str.length; i++) {
    if (str[i] in counter) {
      counter[str[i]] = counter[str[i]] + 1;
    } else {
      counter[str[i]] = 1;
    }
  }

  let singleOdd = false;
  let canBeDone = true;
  for (const [_, value] of Object.entries(counter)) {
    if (singleOdd == false && value % 2 != 0) {
      singleOdd = true;
    } else if (singleOdd == true && value % 2 != 0) {
      canBeDone = false;
    }
  }
  return canBeDone;
}

function main() {
  let s = "uwu";
  console.log(
    `It is ${canFormPalindrome(
      s
    )} that ${s} can be arranged to form a palindrom`
  );
}

main();
