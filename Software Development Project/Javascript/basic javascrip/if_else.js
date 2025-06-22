
// ## If else statement

if (4 > 5) {
  console.log("4 is bigger than 5");
} else {
  console.log("5 is bigger than 4");
}

// 2nd examaple with condition
var number = 50;
if (number % 2 == 0) {
  console.log(" wow its even number");
} else if (number % 2 == 1) {
  console.log("wow its Oddd number");
} else {
  console.log("dont knwo whats that ");
}

// 3rd examaple

// nested condition

var number2 = 30;

if (number2 > 20) {
  if (typeof number2 == "number") {
    console.log("number 2 is a number");
  } else if (typeof number2 == "string") {
    console.log("wow number 2 is string");
  } else {
    console.log("maybe number 2 is boleen");
  }
} else {
  console.log(" number 2 is very small number please try  bigger then 20");
}

// Grade countunting

var result = 39;
if (result > 0) {
  if (result < 33) {
    console.log("wow  tumi fail korco !! Now  Breakup dont call me again");
  } else if (result >= 33 && result < 40) {
    console.log("You just passed this exam (kono moto)");
  } else if (result >= 40 && result < 50) {
    console.log("your grade is D");
  } else if (result >= 50 && result < 60) {
    console.log("your grade is C");
  } else if (result >= 60 && result < 70) {
    console.log("your grade is B");
  } else if (result >= 70 && result < 80) {
    console.log("your grade is A-");
  } else if (result >= 80 && result < 90) {
    console.log("your grade is A+ ");
  } else if (result > 90 && result <= 100) {
    console.log("your grade is  excillent ");
  } else {
    console.log("cant not found please try again yoru grade range is 0-100");
  }
} else {
  console.log("please try with positive number ");
}


// ** Switch statement  with condition

var num5 = 10;

switch (num5) {
  case 1:
    console.log("hello");
  case 5:
    console.log("hoiceee");
}
