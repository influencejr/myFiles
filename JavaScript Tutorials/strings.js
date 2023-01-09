const name2 = 'Леха'
const age = 69 

const output = `Привет, меня зовут ${name2}, и мой возраст ${age}`
console.log(output)

const output2 = `
    Hello,
    World!
`
console.log(output2)

console.log(name2.length) //Длина строки

console.log(name2.toUpperCase()) //Переводим в верхний регистр

console.log(name2.toLowerCase()) //Переводим в нижний регистр

console.log(name2.charAt(2)) //Выводит в консоль символ, который находится по индексу, который мы передали

console.log(name2.indexOf('Л')) //Выводит в консоль индекс того символа, который мы передали, если мы передали символ, которого нету в строке, то выведется -1

console.log(name2.startsWith('Л')) //Возвращает true или false если строка начинается значением, которое мы передали

console.log(name2.toLowerCase().startsWith('леха')) //Если нужно проверить, начинается ли строка с маленького символа, то можно сначала перевести строку в нижний регистр, и потом проверить

console.log(name2.endsWith('ха')) //Аналогия с startsWith

console.log(name2.repeat(3)) //Выводит нашу строку то количество раз, которое мы передали

const text = '    password    '

console.log(text.trim()) //Если в нашей строке есть пробелы, то мы можем обрезать их

console.log(text.trimStart()) //Если нужно обрезать пробелы в начале, то можно использовать .trimStart

console.log(text.trimEnd()) //Аналогия .trimStart

