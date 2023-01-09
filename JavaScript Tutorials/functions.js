const name2 = 'Leha'
const age = 69

//Function Declaration
function func(){}

//Function Expression

const func2 = function(){}

let counter = 0
const interval = setInterval(function cntr(){ //Также еще есть setTimeout(): setInterval ставит интервал между выполнением функции, setTimeout ставит задержку перед функцией
    if(counter === 10)
        clearInterval(interval) //По аналогии есть clearTimeout
    else
        console.log(++counter)
}, 250)

const arrow = (name2, age) => { console.log(`Hello, my name is ${name2}, and my age is ${age}`)} //Стрелочные функции, в скобках передаются параметры, если параметр один, то скобки
// можно опустить

const arrow2 = name2 => console.log(`Hello, my name is ${name2}`)

const pow2 = num => num ** 2 // ** это знак возведения в степень

console.log(pow2(5))

const sum = (a = 40, b = 2) => a + b //Можно передавать параметры по умолчанию, если при вызове функции не будут переданы значения, то будут использоваться параметры по умолчанию

console.log(sum())
console.log(sum(41))
console.log(sum(41,1))

function sumAll(...all){ // знак ... позволяет передать неопределенное количество параметров
    let result = 0
    for(let num of all) { result += num}
    return result
}

const res = sumAll(1,12,111,3321,4141)

console.log(res)

function createMember(name){
    return function(lastName){ console.log(name + lastName)}
}

const logWithLastName = createMember(name2)
console.log(logWithLastName('Vlazhnuy'))
console.log(createMember(name2)('Kirpich'))