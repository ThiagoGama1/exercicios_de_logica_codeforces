package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
	"unicode"
)

func aWord(word string) string {
	contadorMaiuscula := 0
	contadorMinuscula := 0

	for _, letra := range word {
		if unicode.IsLower(letra) {
			contadorMinuscula++
			continue
		}
		contadorMaiuscula++
	}
	if contadorMaiuscula > contadorMinuscula {
		return strings.ToUpper(word)
	}

	return strings.ToLower(word)

}
func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	//var n int //esqueleto
	//fmt.Fscan(in, &n)
	//fmt.Fprintln(out, n)
	var str string
	fmt.Fscan(in, &str)
	fmt.Fprintln(out, aWord(str))
}
