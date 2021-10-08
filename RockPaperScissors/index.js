let a = document.querySelectorAll("li");
console.log(a);
let count = document.querySelector(".count");
let change = document.querySelector(".mid");
let change2 = document.querySelector(".bot");
let change3 = document.querySelector(".user");
let change4 = document.querySelector(".comp");
let refresh = document.querySelector(".refresh");
// let line=document.querySelector(".up");
let i = 0,
  j = 0,
  c = 0;
change3.innerHTML = 0;
change4.innerHTML = 0;
count.innerHTML = 0;
for (item of a) {
  console.log(item);
  item.addEventListener("click", (e) => {
    change.innerHTML = "";
    change2.innerHTML = "";
    c++;
    count.innerHTML = c;
    // line.innerHTML = "WINNER IS:";
    let b = e.target.innerHTML;
    console.log(b);
    let choice = Math.round(Math.random() * 2 + 1);
    console.log(choice);
    if (b == "ROCK" && choice == 2) {
      change.innerHTML = "COMPUTER";
      i++;
      change4.innerHTML = i;
      change3.innerHTML = j;
      console.log("YES");
      change2.innerHTML = "PAPER";
    }
    if (b == "ROCK" && choice == 1) {
      // line.innerHTML = "DRAW";
      change.innerHTML = "NO ONE";
      console.log("YES");
      change2.innerHTML = "ROCK";
    }
    if (b == "ROCK" && choice == 3) {
      change.innerHTML = "USER";
      j++;
      change4.innerHTML = i;
      change3.innerHTML = j;
      console.log("YES");
      change2.innerHTML = "SCISSORS";
    }
    if (b == "PAPER" && choice == 1) {
      change.innerHTML = "USER";
      j++;
      change4.innerHTML = i;
      change3.innerHTML = j;
      console.log("YES");
      change2.innerHTML = "ROCK";
    }
    if (b == "PAPER" && choice == 2) {
      change.innerHTML = "NO ONE";
      console.log("YES");
      change2.innerHTML = "PAPER";
    }
    if (b == "PAPER" && choice == 3) {
      change.innerHTML = "COMPUTER";
      i++;
      change4.innerHTML = i;
      change3.innerHTML = j;
      console.log("YES");
      change2.innerHTML = "SCISSORS";
    }
    if (b == "SCISSORS" && choice == 1) {
      change.innerHTML = "COMPUTER";
      i++;
      change4.innerHTML = i;
      change3.innerHTML = j;
      console.log("YES");
      change2.innerHTML = "ROCK";
    }
    if (b == "SCISSORS" && choice == 2) {
      change.innerHTML = "USER";
      j++;
      change4.innerHTML = i;
      change3.innerHTML = j;
      console.log("YES");
      change2.innerHTML = "PAPER";
    }
    if (b == "SCISSORS" && choice == 3) {
      change.innerHTML = "NO ONE";
      console.log("YES");
      change2.innerHTML = "SCISSORS";
    }
  });
}
refresh.addEventListener("click", () => {
  change.innerHTML = "";
  change2.innerHTML = "";
  change3.innerHTML = 0;
  (i = 0), (j = 0), (c = 0);
  change4.innerHTML = 0;
  count.innerHTML = 0;
});
