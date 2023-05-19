package abc301

func OverallWinner(N int, S string) string {

	var takahashi_win_num int = 0
	var aoki_win_num int = 0

	for i := 0; i < N; i++ {
		if S[i] == 'T' {
			takahashi_win_num++			
		}
		if S[i] == 'A' {
			aoki_win_num++
		}
	}

	if takahashi_win_num > aoki_win_num {
		return "T"
	}
	if aoki_win_num > takahashi_win_num {
		return "A"
	}
	if aoki_win_num == takahashi_win_num {
		if S[N-1] == 'T' {
			return "A"
		}
		if S[N-1] == 'A' {
			return "T"
		}
	}
	return ""
}
