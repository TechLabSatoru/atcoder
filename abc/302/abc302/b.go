package abc302

func Findsnuke(H int, W int, S []string) ([5]int, [5]int) {

	for i := 0; i < H; i++ {
		for j := 0; j < W; j++ {
			if string(S[i][j]) == "s" {
				// 右
				if j+4 < W {
					if string(S[i][j+1]) == "n" && string(S[i][j+2]) == "u" && string(S[i][j+3]) == "k" && string(S[i][j+4]) == "e" {
						R := [5]int{i + 1, i + 1, i + 1, i + 1, i + 1}
						C := [5]int{j + 1, j + 2, j + 3, j + 4, j + 5}

						return R, C
					}
				}
				// 下
				if i+4 < H {
					if string(S[i+1][j]) == "n" && string(S[i+2][j]) == "u" && string(S[i+3][j]) == "k" && string(S[i+4][j]) == "e" {
						R := [5]int{i + 1, i + 2, i + 3, i + 4, i + 5}
						C := [5]int{j + 1, j + 1, j + 1, j + 1, j + 1}

						return R, C
					}
				}
				// 左
				if j-4 >= 0 {
					if string(S[i][j-1]) == "n" && string(S[i][j-2]) == "u" && string(S[i][j-3]) == "k" && string(S[i][j-4]) == "e" {
						R := [5]int{i + 1, i + 1, i + 1, i + 1, i + 1}
						C := [5]int{j + 1, j, j - 1, j - 2, j - 3}

						return R, C
					}
				}
				// 上
				if i-4 >= 0 {
					if string(S[i-1][j]) == "n" && string(S[i-2][j]) == "u" && string(S[i-3][j]) == "k" && string(S[i-4][j]) == "e" {
						R := [5]int{i + 1, i, i - 1, i - 2, i - 3}
						C := [5]int{j + 1, j + 1, j + 1, j + 1, j + 1}

						return R, C
					}
				}
				// 右上
				if i-4 >= 0 && j+4 < W {
					if string(S[i-1][j+1]) == "n" && string(S[i-2][j+2]) == "u" && string(S[i-3][j+3]) == "k" && string(S[i-4][j+4]) == "e" {
						R := [5]int{i + 1, i, i - 1, i - 2, i - 3}
						C := [5]int{j + 1, j + 2, j + 3, j + 4, j + 5}

						return R, C
					}
				}
				// 右下
				if i+4 < H && j+4 < W {
					if string(S[i+1][j+1]) == "n" && string(S[i+2][j+2]) == "u" && string(S[i+3][j+3]) == "k" && string(S[i+4][j+4]) == "e" {
						R := [5]int{i + 1, i + 2, i + 3, i + 4, i + 5}
						C := [5]int{j + 1, j + 2, j + 3, j + 4, j + 5}

						return R, C
					}
				}
				// 左下
				if i+4 < H && j-4 >= 0 {
					if string(S[i+1][j-1]) == "n" && string(S[i+2][j-2]) == "u" && string(S[i+3][j-3]) == "k" && string(S[i+4][j-4]) == "e" {
						R := [5]int{i + 1, i + 2, i + 3, i + 4, i + 5}
						C := [5]int{j + 1, j, j - 1, j - 2, j - 3}

						return R, C
					}
				}
				// 左上
				if i-4 >= 0 && j-4 >= 0 {
					if string(S[i-1][j-1]) == "n" && string(S[i-2][j-2]) == "u" && string(S[i-3][j-3]) == "k" && string(S[i-4][j-4]) == "e" {
						R := [5]int{i + 1, i, i - 1, i - 2, i - 3}
						C := [5]int{j + 1, j, j - 1, j - 2, j - 3}

						return R, C
					}
				}
			}
		}
	}

	var R [5]int
	var C [5]int

	return R, C
}
