const priceList = new Map() //Обьявляем новый Map

priceList.set('mango', '5 usd') //Чтобы добавить элемент в map, используем метод .set, где первым параметром передаем ключ, а вторым - значение.
priceList.set('apple', 4) //Вторым параметром мы можем передавать все типы данных: bool, int, string, char
priceList.set('banana', '3 usd')
console.log(priceList.get('apple')) //Чтобы получить элемент, используем метод .get, где указываем ключ(первый параметр)
priceList.delete('banana') //Чтобы удалить элемент, используем метод .delete, где указываем ключ

let priceList2 ={}
priceList2['vermishel'] = 5
priceList2['baklazhan'] = '3 usd'
delete priceList2['apple']
Object.keys(priceList2).length //Также можно реализовать hash-map с помощью объекта