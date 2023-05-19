package main

import (
	"fmt"

	"301/abc301"
)

func main() {
	var N int
	var S string

	fmt.Scan(&N, &S)

	fmt.Println(abc301.OverallWinner(N, S))
}
