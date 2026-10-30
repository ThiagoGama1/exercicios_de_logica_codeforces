package main

import (
	"bufio"
	"fmt"
	"os"
)

func setup(binaryFinalString string) int {
	numbers := []rune(binaryFinalString)
	for len(numbers) >= 2 && numbers[0] != numbers[len(numbers)-1] {
		newString := numbers[1 : len(numbers)-1]
		numbers = newString
	}
	return len(numbers)

}
func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var t int
	fmt.Fscan(in, &t)

	for i := 0; i < t; i++ {
		var n int
		var text string
		fmt.Fscan(in, &n, &text)
		fmt.Fprintln(out, setup(text))
	}
}
