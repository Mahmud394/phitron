var test = "Test";

var friends = [
  "hero", 5,"ALom",
  test,
  { name: "jhon" },
  ["rohim", "korim"],
  "jobbar",
];


console.log(friends.length)

console.log(friends[0])
console.log(friends[1])
console.log(friends[2])
console.log(friends[3])
console.log(friends[4])
console.log(friends[5])



friends.push("mahmud");

friends.pop()

friends.unshift("mahmud");

friends.shift();

console.log(friends);
