package main

import (
	"fmt"
)

// int format:
// %b 	Base 2
// %d 	Base 10
// %+d 	Base 10 and always show sign
// %o 	Base 8
// %O 	Base 8, with leading 0o
// %x 	Base 16, lowercase
// %X 	Base 16, uppercase
// %#x 	Base 16, with leading 0x
// %4d 	Pad with spaces (width 4, right justified)
// %-4d 	Pad with spaces (width 4, left justified)
// %04d 	Pad with zeroes (width 4

// string format:
// %s 	Prints the value as plain string
// %q 	Prints the value as a double-quoted string
// %8s 	Prints the value as plain string (width 8, right justified)
// %-8s 	Prints the value as plain string (width 8, left justified)
// %x 	Prints the value as hex dump of byte values
// % x 	Prints the value as hex dump with spaces

// bool format:
// %t, same as %v

//float format:
// %e 	Scientific notation with 'e' as exponent
// %f 	Decimal point, no exponent
// %.2f 	Default width, precision 2
// %6.2f 	Width 6, precision 2
// %g 	Exponent as needed, only necessary digits

func output() {
	fmt.Println("Hello World!")
}

func sum(x, y int) int {
	return x + y
}

func add(numbers ...int) {
	var sum = 0
	for _, number := range numbers {
		sum += number
	}
	fmt.Println("sum = ", sum)
}

func main() { //He-he)
	// 	var (
	// 	a int     = 42
	// 	b float32 = 42.42
	// 	c bool    = false
	// 	)
	// 	const (
	// 		Z int     = 42
	// 		X float32 = 42.42
	// 		V bool    = true
	// 	)

	// 	var nonnegative uint = 4242 //uint - non-negative integer
	// 	fmt.Println(nonnegative)

	// 	var array = [3]int{1, 2, 3} //[3] - size of array, int - type of array, {1,2,3} - values of array
	// 	fmt.Println(array)
	// 	fmt.Println(array[1])
	// 	var array2 = [...]int{1, 2, 3, 4, 444, 512} //[...] means we can store as much values as we want
	// 	fmt.Println(array2)
	// 	var testarray = [5]int{}
	// 	fmt.Println(testarray)
	// 	var array3 = [5]int{1, 2}
	// 	fmt.Println(array3)
	// 	var array4 = [5]int{1: 24, 2: 42} //1: index of our element we want to set, 24: value of our element that will store at index 1
	// 	fmt.Println(array4)
	// 	var arraylen int = len(array4)
	// 	fmt.Println("Len of array4: ", arraylen)

	// 	var arraytest = [...]int{1, 12, 33, 42, 24, 69, 1232}
	// 	var myslice = arraytest[3:7]
	// 	var myslice2 = make([]int, 5, 10)
	// 	myslice = append(myslice, 20, 25, 32) //Append - adds element to the end of the slice
	// 	fmt.Printf("myslice: %v\n", myslice)
	// 	fmt.Printf("length: %d\n", len(myslice))
	// 	fmt.Println(myslice2)
	// 	myslice3 := append(myslice, myslice2...) //Appending one slice with other slices
	// 	fmt.Println(myslice3)
	// 	const LEHA int = 42
	// 	var myInt int = 42
	// 	var myString string = "Hello World!"
	// 	var myBool bool = false
	// 	var myFloat float32 = 42.42
	// 	var myFloat64 float64 = 42.4242
	// 	fmt.Println(myFloat64)
	// 	var unknown = 42
	// 	var xdd int = 42
	// 	xdd = 24
	// 	fmt.Printf("value of myInt is %v and type is %T", myInt, myInt) //%v stands for value, %T stands for TYPE, %#v prints value in go syntax format, %% outputs % sign
	// 	fmt.Println(xdd)
	// 	fmt.Println(unknown)
	// 	fmt.Println(myInt)
	// 	fmt.Println(myString)
	// 	fmt.Println(myBool)
	// 	fmt.Println(myFloat)
	// 	fmt.Println("Hello World!")

	var (
		a int  = 42
		b int  = 42
		c bool = a == b //Here we assigning bool value to c: if a == b, c = true
		// d bool = !c  // Here we assigning negative C to D
	)
	// if a > b {
	// 	fmt.Println("a is bigger than b")
	// } else if a < b {
	// 	fmt.Println("b is bigger than a")
	// } else {
	// 	fmt.Println("a is equal to b")
	// }

	// for i := 0; i <= 10; i++ {
	// 	for j := 1; j <= 10; j++ {
	// 		fmt.Print(i*j, "\t")
	// 	}
	// 	fmt.Println()

	// }

	var users = [3]string{"Leha", "Andrey", "Vasily"}
	for index, value := range users {
		fmt.Println(index, value)
	}
	for _, value2 := range users { //If we don't need some value, for example index, we can use underscore
		fmt.Println(value2)
	}

	for k := 0; k < len(users); k++ {
		fmt.Println(users[k])
	}
	fmt.Println(c) //False

	output()
	fmt.Println(sum(4, 5))
	add(4, 12, 212, 3331)
}
