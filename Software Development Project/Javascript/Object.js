var person = {
    hand: 2,
    eye: 2,
    hair: "dont know",
    father: {
        name: "jhon",
        age: 20,
      },
}
console.log(person.hand);
console.log(person.father.age);

// Object.keys()
// Create an Object
const person = {
  firstName: "John",
  lastName: "Doe",
  age: 50,
  eyeColor: "blue"
};

// Get the Keys
const keys = Object.keys(person);