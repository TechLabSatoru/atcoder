package main

import (
	"abc301"
)

func main() {
	var N int
	var S string

	fmt.Scan(&N, &S)

	fmt.Println(OverallWinner(N, S))
}
