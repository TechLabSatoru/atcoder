package abc302

func Attack(A int, B int) int {

	ans := A / B

	if A%B > 0 {
		ans++
	}

	return ans

}
