## 概要

- AtCoderで使用するリポジトリです.

- [TechLabSatoru](https://atcoder.jp/users/TechLabSatoru)で参加しています.

## 環境構築（c++）

```shell
$ cd docker

# dockerコンテナを作成します.
$ docker compose up -d

# dockerコンテナの中に入ります.
$ docker compose exec -it gcc bash

# cd <ディレクトリ名>
# g++ -o <バイナリファイル名> <ファイル名>
# ./<バイナリファイル名>

# go run <ファイル名>

# dockerコンテナを削除します.
$ docker compose down --rmi all --volumes --remove-orphans
```
