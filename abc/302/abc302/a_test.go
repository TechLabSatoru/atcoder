package abc302

import (
	"testing"
)

type TestCaseA struct {
	a      int
	b      int
	result int
}

func TestAttack(t *testing.T) {

	testcases := []TestCaseA{
		{a: 7, b: 3, result: 3},
		{a: 123456789123456789, b: 987654321, result: 124999999},
		{a: 999999999999999998, b: 2, result: 499999999999999999},
	}

	for _, testcase := range testcases {
		ans := Attack(testcase.a, testcase.b)

		if ans != testcase.result {
			t.Fatalf("A: %d B: %d -> expected: %d, got: %d", testcase.a, testcase.b, testcase.result, ans)
		}
	}

}
