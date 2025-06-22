const oddEven = (array) => {
  let eventNumber = [];
  let oddNumber = [];

  for (let i = 0; i < array.length; i++) {
    const element = array[i];

    if (element % 2 == 0) {
      eventNumber.push(element);
    } else {
      oddNumber.push(element);
    }
  }
  return oddNumber;
//   return eventNumber;
};



const numbers = [
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
    23, 24, 25, 26,30,56,67,67,34,
  ];
const result = oddEven(numbers);
console.log(result);
