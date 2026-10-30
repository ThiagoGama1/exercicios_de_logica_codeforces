package main

import (
	"bufio"
	"fmt"
	"os"
	"slices"
)

func setup(list []int) int {
	slices.Sort(list)
	sum := 0
	for i := 0; i < 6; i++ {
		list[i] *= -1
		sum += list[i]
	}
	sum += list[6]
	return sum
}
func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var n int //esqueleto
	fmt.Fscan(in, &n)
	for i := 0; i < n; i++ {
		listaInteiros := make([]int, 7)

		for j := 0; j < len(listaInteiros); j++ {
			fmt.Fscan(in, &listaInteiros[j])
		}
		fmt.Fprintln(out, setup(listaInteiros))
	}
}
