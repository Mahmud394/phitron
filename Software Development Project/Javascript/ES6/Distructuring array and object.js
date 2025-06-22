
// Distructuring object
const person = {
  name: "test",
  age: 10,
  friends: ["korim", "rahim", "jabbar"],
};

// const age = person.age;
// const { age} = person;


const { friends,age } = person;
console.log(age);
console.log(friends);


// Distructuring array
const names = ["korim", 10, "lorembfs iufb siufbs fusb"];

// const [name,age, description] = names;

const [a,b, c] = names;

console.log(a);
console.log(b);
console.log(c);