function monthlySavings(payments, livingCost) {
  // Input validation
  if (!Array.isArray(payments)) {
    return "invalid input";
  }

  let totalIncome = 0;

  for (let amount of payments) {
    if (amount >= 3000) {
      totalIncome += amount * 0.8; // 20% tax
    } else {
      totalIncome += amount; // no tax
    }
  }

  let savings = totalIncome - livingCost;

  if (savings >= 0) {
    return savings;
  } else {
    return "earn more";
  }
}

console.log(monthlySavings([1000, 2000, 3000], 5400)); 
console.log(monthlySavings([1000, 2000, 2500], 5000)); 
console.log(monthlySavings([900, 2700, 3400], 10000)); 
console.log(monthlySavings("100, 900, 2700, 3400", 10000)); 
