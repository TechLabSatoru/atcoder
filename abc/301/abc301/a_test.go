package abc301

import (
	"testing"
)

type TestCase struct {
	n int
	s string
	result string
}

func TestOverallWinner(t *testing.T) {

	testcases := []TestCase {
		{ n: 5, s: "TTAAT", result: "T"},
		{ n: 6, s: "ATTATA", result: "T"},
		{ n: 1, s: "A", result: "A"},
		{ n: 6, s: "ATTAAT", result: "A"},
	}

	for _, testcase := range testcases {
		ans := OverallWinner(testcase.n, testcase.s)

		if ans != testcase.result {
			t.Fatalf("%s: expected: %s, got: %s", testcase.s, testcase.result, ans)
		}
	}

}
