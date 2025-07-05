
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
