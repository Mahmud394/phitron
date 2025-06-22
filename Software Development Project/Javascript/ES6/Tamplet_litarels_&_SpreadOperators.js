// Tamplet litarels ->``

const countryName="Bangladesh"

const country = ` My country is ${countryName} `;

console.log(country);

// Spread Operators-> ...

const number = [1,2,3,4,5,6,7,8,9,10];

const number1= [11,1,2,1,3,1,4,16,1,5];

console.log([...number, ...number1]);

console.log(...number);

console.log(Math.max(...number1));