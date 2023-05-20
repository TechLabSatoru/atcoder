## Go言語でAtcoderを始める方法

- 完成系のディレクトリ構造

```shell
$ tree
.
|-- abc301
|   |-- a.go
|   |-- a_test.go
|   `-- go.mod
`-- main.go
```

- `abc301`ディレクトリ配下で`go mod init <project name>`コマンドを実行してプロジェクトの初期化を行う.

    - 今回は`go mod init 301`を実行して下さい.

    - `go mod init`とは、

    - このコマンドは必要ではなさそうです.

```shell
$ go mod init abc301
go: creating new go.mod: module abc301
go: to add module requirements and sums:
        go mod tidy
```

- テストコードの実行

```shell
$ cd <abc301> 
$ go test -v
=== RUN   TestOverallWinner
--- PASS: TestOverallWinner (0.00s)
PASS
ok      abc301  0.002s
```

- テストにおけるカバレッジ率（網羅率）の表示

```shell
$ go test -v -cover
=== RUN   TestOverallWinner
--- PASS: TestOverallWinner (0.00s)
PASS
        abc301  coverage: 88.2% of statements
ok      abc301  0.002s
```

- 上記からテストにおけるカバレッジ率は`88.2%`なので、`100%`を目指すために修正を行うことにする.

    - カバレッジの詳細情報をファイルで出力します.

    - 出力されたファイルの結果からテストケースを追加します.

```shell
$ go test -coverprofile=a_cover.out
$ go tool cover -html=a_cover.out -o a_cover.html
```

- テスト関数単位でテストを実行する場合

```shell
$ go test -run TestFillTheGaps
```

- ファイル（プログラム）単位でテストを実行する場合

```shell
$ go test b_test.go
```
