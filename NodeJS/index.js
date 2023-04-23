const arr = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16];
const count = 3;
let finalArray = [];
for(let i = 0; i <= arr.length; i++){
    
}

findAvg(arr);

function findAvg(arr){
    let addition = 0;
    for(let j = 0; j <= 3; j++){
        addition = addition + arr[j]
    }
    let avg = addition/4
    console.log(avg)
}