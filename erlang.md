<!-- .slide: data-background-transition: "slide" -->

## Erlang 入門

2015/05/18

darai

---

### 目的

- Erlang を使ってみる

---

## What Erlang ?

・並列処理指向
・関数型

---

- 1998年にEricsson社により開発され、オープンソースとして公開
- 電話会社が開発したため、大量の並列処理・障害への耐性が強い

---

- reference

basic
http://erlangworld.web.fc2.com/concurrent_programming/index.html

slide
http://d.hatena.ne.jp/mainyaa/20080618/1213761399

---

# Erlangにおける並列性
メモリを共有するスレッドとは異なり、独自のメモリ空間上で、独自のヒープとスタックを持って実行される。  
プロセス同士が偶然干渉されることはなく、スレッドによくあるデッドロックは回避される。  
プロセスに対してOSのスレッドを常に生成するわけではない。プロセスの生成・スケジュール・処理は全てErlang VMの中で行われる。
JavaやC#のプロセスはOSのスレッドが生成。Erlangではプロセスの生成時間はマイクロ秒オーダーで、既にあるプロセス数とは独立。メッセージ私もプロセスのメモリ空間のコピーなので圧倒的に早
い

