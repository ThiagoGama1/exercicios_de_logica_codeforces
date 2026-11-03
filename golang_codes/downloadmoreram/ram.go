package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func setup(k int, a []int, b []int) int {
	//k é a sua quantidade de ram atual
	type software struct {
		a, b int
	}
	lista := make([]software, len(a))
	for i := 0; i < len(a); i++ {
		lista[i] = software{a[i], b[i]}
	}
	sort.Slice(lista, func(i, j int) bool {
		return lista[i].a < lista[j].a
	})
	for i := 0; i < len(lista); i++ {
		if lista[i].a > k {
			break
		}
		k += lista[i].b
	}
	return k
}
func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var t int
	fmt.Fscan(in, &t)
	for ; t > 0; t-- {
		var n, k int
		fmt.Fscan(in, &n, &k)

		a := make([]int, n)
		b := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(in, &a[i])
		}
		for i := 0; i < n; i++ {
			fmt.Fscan(in, &b[i])
		}

		fmt.Fprintln(out, setup(k, a, b))
	}
}
