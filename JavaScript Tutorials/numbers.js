const num = 42
const float = 42.42
const stringInt = '42'
const stringFloat = '42.42'


console.log('MAX_SAFE_INTEGER', Number.MAX_SAFE_INTEGER)

console.log('MIN_SAFE_INTEGER', Number.MIN_SAFE_INTEGER)

console.log('MAX_VALUE', Number.MAX_VALUE)

console.log('MIN_VALUE', Number.MIN_VALUE)

console.log('POSITIVE_INFINITY', Number.POSITIVE_INFINITY)

console.log('NEGATIVE_INFINITY', Number.NEGATIVE_INFINITY)

console.log(Number.isNaN(num)) //Выводит false если переменная является числом, и true если нет

console.log(Number.parseInt(stringInt) + 2)

console.log(Number.parseFloat(stringFloat) + 2)

console.log(+stringInt + 2) //Тоже самое что и parseInt

console.log(+stringFloat + 2)

console.log((0.4 + 0.6).toFixed(1))

const bigINT = 42n //Если мы в конце числа допишем n, то это будет показывать, что число типа BigInt. Числа типа float не могут быть BigInt

//console.log(10n - 4) выдаст ошибку, мы не можем отнимать обычный int от BigInt

console.log(parseInt(10n) - 4)

console.log(10n - BigInt(4))

console.log(Math.PI)

console.log(Math.E)

console.log(Math.sqrt(25)) //Корень числа

console.log(Math.pow(5, 3)) //Возводим число(первый парамерт) в степень(второй параметр)

console.log(Math.abs(-42)) //Делает из негативного числа позитивное

console.log(Math.max(42,11,22,1313,4444,1)) //Выводит наибольшее число из переданых

console.log(Math.min(42,11,22,1313,4444,1)) //Выводит наименьшее число из переданых

console.log(Math.floor(42.5)) //Округляет число в меньшую строну

console.log(Math.ceil(42.5)) //Округляет число в большую сторону

console.log(Math.round(42.5)) //Лучшее округление, округляет в меньшую сторону если число после комы меньше .5, и в большую если больше или равно .5

