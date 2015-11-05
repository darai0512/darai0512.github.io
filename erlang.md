<!-- .slide: data-background-transition: "slide" -->

## Erlang

2015/05/18

Daiki Arai

---

### 目的

- try to use Erlang  

---

## What can we call Erlang?

- アーラン  
- エアラング in English  
 
---

## What Erlang ?

・並列処理指向
・関数型

---

- 1998年にスウェーデンのEricsson社により開発されたOSS
- ERicsson LANGuage
- 電話会社が開発したため、大量のコネクションの扱い(並列処理)・障害耐性に強い

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

