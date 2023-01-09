let userInfo = {
    name: 'Leha',
    age: 25,
address: {
        city: 'Kiev',
        street: 'Kalnyshevskogo' 
    },
    showInfo(){
        console.log(`${userInfo.name}, ${userInfo.age} лет, г. ${userInfo.address.city}, ул. ${userInfo.address.street}.`)
       }
}

userInfo.showInfo()

userInfo.chetotam = 12

for(let key in userInfo){ console.log(key); console.log(userInfo[key])}

//delete userInfo.name //!Чтобы удалить свойство объекта

userInfo.age = 18 //!Чтобы изменить значение объекта. Изменять свойство объекта можно даже в константе

let user = Object.assign({}, userInfo) //!Чтобы продублировать объект, можно использовать Object.assign. В скобках указываем куда дублируем (в нашем случае {} означает новый объект)
//! и потом что дублируем 

Object.assign(userInfo, { isMarried: true, numofHouse: 3,}) //!Также можно использовать чтобы присваивать  объекту новые свойства

console.log(userInfo?.address?.city) //!Вместо ошибки выдаст undefined, если свойство не будет найдено в объекте

if("name" in userInfo){console.log(userInfo.name)} //!Проверяем, есть ли в объекте свойство name (обязательно нужно указывать название свойства в кавычках)

function UserInfo(name){
    this.name = name
    this.age = 30
} //!Это конструктор, его нужно сделать если мы множество раз создаем одинаковые объекты, название всегда нужно начинасть с большой буквы

console.log(new UserInfo('Vasek')) //!Всегда нужно писать new
console.log(new UserInfo('Olesha'))

// for(const key in userInfo){ 
//     const value = userInfo[key]
//     console.log(`Eto value - ${value}`)
// }