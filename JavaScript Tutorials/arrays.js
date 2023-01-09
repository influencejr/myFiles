const cars = ['Мазда', 'Форд', 'БМВ', 'Мерседс']
const people = [
  {name: 'Vladilen', budget: 4200},
  {name: 'Elena', budget: 3500},
  {name: 'Victoria', budget: 1700}
]
const fib = [1, 1, 2, 3, 5, 8, 13]


cars.push('Волга') //Добавляет элемент в конец массива
cars.unshift('Порше') //Добавляет элемент в самое начало массива
cars.shift() //Удаляет самый первый элемент массива
cars.pop() //Удаляет самый последний элемент массива
cars.reverse() //Реверсит массив
const index = cars.indexOf('БМВ') //Присваеваем константе index индекс элемента 'БМВ'
const index2 = cars.indexOf('!') //Если такого элемента нету в массиве, то константе индекс присвоиться значение -1

let findedPeople
for(const person of people){
    if(person.budget === 3500) { findedPeople = person} 
} //Функция, которая находит person с budget == 3500 и присваевает его переменной findedPeople

const indexPerson = people.findIndex(function(person){ return person.budget === 3500}) //Та же самая функция, только написаная короче

const IndexPerson1 = people.find(function(person){ return person.budget === 3500}) //Та же самая функция, написанная через .find

const indexPerson2 = people.find(person => person.budget === 3500) //Стрелочная функция

console.log(findedPeople) 

const includesOrNot = cars.includes('Мазда') //Проверяет, содержит ли массив введенный элемент, и возвращает True, если содержит, и False если нет

const toUpperCaseCars = cars.map(car => car.toUpperCase()) //.map создает копию массива, то есть не изменяет первый массив, а создает копию, и изменяет ее, toUpperCase переводи
//элемент car в вверхний регистр

const pow2 = num => num ** 2

const fib2cars = fib.map(pow2).map(Math.sqrt) //Возводит наш массив в квадрат, Math.sqrt = занести под корень

const filteredNumbers = fib2cars.filter(num => num > 20) //Фильтрует наш массив, и не добавляет в него числа меньше 20

const string = 'Привет, мы изучаем JavaScript'
const reverseString = string.split('').reverse().join('') //string.split - разделяет наш массив по определенному символу и добавляет в массив, если символа нет, то добавляет каждую 
//букву в массив, .reverse - реверсит наш массив, .join - соединяет значения в массиве, так же по символу, если символа нет, то соединяет все в одну строчку

console.log(reverseString)

const allBudget = people.filter(person => person.budget > 2000).reduce((acc, person) => {
    acc += person.budget
    return acc
}, 0) //.filter - фильтрует person.budget, у которых budget < 2000, .reduce складывает значения