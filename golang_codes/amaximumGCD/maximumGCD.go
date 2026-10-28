package main

import (
	"bufio"
	"fmt"
	"os"
)

/*
	jeito burro  mas funcional de fazer:

resto := 1

	if primeiroInt == 0 {
		return segundoInt
	} else if segundoInt == 0 {

		return primeiroInt
	}

	if primeiroInt > segundoInt {
		for i := 0; resto != 0; i++ {
			resto = primeiroInt % segundoInt
			if resto == 0 {
				return segundoInt
			}
			primeiroInt = segundoInt
			segundoInt = resto
		}
	} else if primeiroInt < segundoInt {

		for j := 0; resto != 0; j++ {
			resto = segundoInt % primeiroInt
			if resto == 0 {
				return primeiroInt
			}
			segundoInt = primeiroInt
			primeiroInt = resto
		}
	} else {

		return primeiroInt
	}

return 1
*/
func maxGCD(primeiroInt int, segundoInt int) int {
	for segundoInt != 0 {
		primeiroInt, segundoInt = segundoInt, primeiroInt%segundoInt
	}
	return primeiroInt
}
func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var casos int
	if _, err := fmt.Fscan(in, &casos); err == nil {
		for i := 0; i < casos; i++ {
			var n int
			fmt.Fscan(in, &n) // Lê apenas UM número por caso de teste

			// O maior MDC possível até N é sempre N / 2
			fmt.Fprintln(out, n/2)
		}
	}
}
