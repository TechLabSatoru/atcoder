package main

import (
	"fmt"

	"302/abc302"
)

func main() {

	/* This is code for A problem that is Attack */
	/*
		var A int
		var B int

		fmt.Scan(&A, &B)

		fmt.Println(abc302.Attack(A, B))
	*/
	/* This is code for B problem that is Find snuke */
	var H int
	var W int

	fmt.Scan(&H, &W)

	S := make([]string, H)

	for i := 0; i < H; i++ {
		fmt.Scan(&S[i])
	}

	R, C := abc302.Findsnuke(H, W, S)

	for i := 0; i < 5; i++ {
		fmt.Printf("%d %d \n", R[i], C[i])
	}
}
