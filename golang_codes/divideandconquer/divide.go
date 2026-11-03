package main

import (
	"bufio"
	"fmt"
	"os"
)

func setup(x int, y int) {

}
func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	var t int
	fmt.Fscan(in, &t)

}
