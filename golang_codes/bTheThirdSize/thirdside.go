package main

import (
	"bufio"
	"fmt"
	"os"
)

//triangulo degenerado: a < b + c
// b < a + c
// c < a + b

/*func setup(sequence []int) int{  // NAO PASSA, É MUITO PESADA, DEU TIMEOUT NOS TESTES, mas ta correta
	if len(sequence) == 0 {
		return 0
	}
	for len(sequence) > 1 {
		var i, j int
		i = rand.IntN(len(sequence))

		for {
			j = rand.IntN(len(sequence))
			if i != j {
				break
			}
		}
		a := sequence[i]
		b := sequence[j]

		x := a + b - 1
		if i < j {
			i, j = j, i
		}
		sequence = slices.Delete(sequence, i, i+1)
		sequence = slices.Delete(sequence, j, j+1)
		sequence = append(sequence, x)
	}
	return sequence[0]
}*/

func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var t int
	fmt.Fscan(in, &t)
	for ; t > 0; t-- {
		var n int
		fmt.Fscan(in, &n)
		sum := 0
		for j := 0; j < n; j++ {
			var a int
			fmt.Fscan(in, &a)
			sum += a
		}
		fmt.Fprintln(out, sum-(n-1))
	}
}
