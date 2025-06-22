const products = [
    {id:1,name:"xiaomi",description:"this is xiaomi",price:500,color:"black"},
    {id:2,name:"Iphone",description:"this is Iphone",price:800,color:"golden"},
    {id:3,name:"xiaomi",description:"this is xiaomi",price:500,color:"black"},
    {id:4,name:"Iphone",description:"this is Iphone",price:1000,color:"gray"},
    {id:5,name:"xiaomi",description:"this is xiaomi",price:100,color:"black"},
]

// for (let i = 0; i < products.length; i++){
//     const element = products[i];
//     if (element.id==3) {
//         console.log(element);
//     }
// }

// find           -> only one
const result = products.find(pd => pd.id == 3);
console.log(result);




// undefined -> not find  