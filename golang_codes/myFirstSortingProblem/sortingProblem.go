package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var t int
	fmt.Fscan(in, &t)

	for i := 0; i < t; i++ {
		var n1, n2 int
		fmt.Fscan(in, &n1, &n2) // Lê apenas o par atual

		if n1 <= n2 {
			fmt.Fprintf(out, "%d %d\n", n1, n2)
		} else {
			fmt.Fprintf(out, "%d %d\n", n2, n1)
		}
	}
	//var n int //esqueleto
	//fmt.Fscan(in, &n)
	//fmt.Fprintln(out, n)
}
