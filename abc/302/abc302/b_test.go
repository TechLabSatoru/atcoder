package abc302

import (
	"testing"
)

type TestCaseB struct {
	h        int
	w        int
	s        []string
	result_r [5]int
	result_c [5]int
}

func TestFindsnuke(t *testing.T) {
	
	testcases := []TestCaseB{
		{ h: 6, w: 6, s: []string{"vgxgpu", "amkxks", "zhkbpp", "hykink", "esnuke", "zplvfj"}, result_r: [5]int{5, 5, 5, 5, 5}, result_c: [5]int{2, 3, 4, 5, 6} },
		{ h: 5, w: 5, s: []string{"ezzzz", "zkzzz", "ezuzs", "zzznz", "zzzzs"}, result_r: [5]int{5, 4, 3, 2, 1}, result_c: [5]int{5, 4, 3, 2, 1} },
		{ h: 10, w: 10, s: []string{"kseeusenuk", "usesenesnn", "kskekeeses", "nesnusnkkn", "snenuuenke", "kukknkeuss", "neunnennue", "sknuessuku", "nksneekknk", "neeeuknenk"}, result_r: [5]int{9, 8, 7, 6, 5}, result_c: [5]int{3, 3, 3, 3, 3} },
	}

	for index, testcase := range testcases {
		ans_r, ans_c := Findsnuke(testcase.h, testcase.w, testcase.s)

		if ans_r != testcase.result_r && ans_c != testcase.result_c {
			t.Fatalf("Test case %d: expected: %v, %v, got: %v, %v", index, testcase.result_r, testcase.result_c, ans_r, ans_c)
		}
	}

}
