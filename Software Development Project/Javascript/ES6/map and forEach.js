const products = [
    {id:1,name:"xiaomi",description:"this is xiaomi",price:500,color:"black"},
    {id:2,name:"Iphone",description:"this is Iphone",price:800,color:"golden"},
    {id:3,name:"xiaomi",description:"this is xiaomi",price:500,color:"black"},
    {id:4,name:"Iphone",description:"this is Iphone",price:1000,color:"gray"},
    {id:5,name:"xiaomi",description:"this is xiaomi",price:100,color:"black"},
]

// map -> return like array
const sum = products.map(product => product.id*2);
console.log(sum);

const sum1 = products.map(product => product.id);
console.log(sum1);

// forEach
const result1 = products.forEach(product => {
    console.log(product.id);

});
console.log(result1);