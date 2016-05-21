<!-- .slide: data-background-transition: "slide" -->

### 非jsエンジニアが某漫画の作中ゲームをreactで実装してみた

2016/05

新井 大輝 @darai0512
twitter/github/qiita

---

### Self-Intro

- BEエンジニア
  - java/perl/php/RDBMS ......
- 個人的に勉強中
  - js/nodejs/erlang(elixir)

<aside class="notes">
ベンチャーや同僚から蔑まれたお話
</aside>

---

### 某漫画の作中ゲームを再現してみた (ネタバレ注意)

- <p class="fragment">嘘喰い  
<img src="http://mym.corp.yahoo.co.jp/paster/ce7ff90f7c58256702fc.png" width="300" height="450"/>
</p>
- [Demo(β版)](http://darai0512.github.io/AirPoker/index.html)

<aside class="notes">
デモを通してルール紹介
</aside>

---

### Air Pokerの特徴

- 序盤であれば最低でも役はFlush以上
  - Flush/FullHouse/FourCard/StraightFlush
- 5の倍数ならストフラの可能性大
- 相手とカードが被る？
  - 「天災」発動

---

### Motivation

- GithubにPortfolioないのが許されるのって小学生までだよね
  - [bmsjs @bokuweb](http://bokuweb.github.io/bmsjs/) 
  - [ika-maker @leader22](http://ikasu.lealog.net/)
  - [React-MineSweeper @shibe97](http://shibe97.github.io/mineSweeper/)
- Github pagesでサーバー代タダ (お買い得ぅ!!)
- 最近のFEの盛り上がりに煽られて

<aside class="notes">
小学生のプログラミング授業
サムライト(全員Lisper)のbokuwebさんの音ゲー,react/Mithril.js/camvasの速度比較と60fps(http://dic.nicovideo.jp/a/60fps)
leader22さんのはRedux,4日で作成
弊社MSCデザイナーの柴田さんは今年のdevsummit speaker
</aside>

---

### Tech

- ECMAScript2015(es6) & babel
- react
- gulp & browserify
- Google Analitics

よくある構成。Riot.js使ってみたかった

>>>

### React vs Riot

- 仮想DOM vs [Web Components](http://qiita.com/aggre/items/928eb2bedbac6a7829c0)
- onClick vs onclick
  - 生JSが使えるので学習コスト低
- 弊社ではReact推し（泣）

---

### 開発してみて

- [Qiitaに投稿予定](http://qiita.com/darai0512)
- Good: es6楽しい！
  - 但しes5の知識も大事(ex, [typescriptでのenum](https://www.typescriptlang.org/play/))
- Bad: 汎用性を意識しすぎた
  - trump_framework
      - 『なぜ、あなたはJavaでオブジェクト指向開発ができないのか』(上松氏推薦)を参考
  - 「皆で3回使い回したら関数化」(by hitode909)
      - 一人開発でやることじゃない
  - でもおかげで『継承の本質はInterface』(by tutinoco)を理解できた（気がする）

<aside class="notes">
hitode909: はてなブログの中の人
</aside>

---

## For Release

- To Do
  - Design/Animation
  - Description & 多言語対応
  - Test by mocha/chai/React.addons.TestUtil
  - 実装漏れ (Timer...)
  - Copyright
      - ファンレターで先手
- Please Pull Request!!
  - NPCの思考回路を実装ください!!!

---

### Help Me

- 密かに社内プロダクトでE2Eテストを実験中
  - nightmarejs v2
- 弊社のLinux上でElectronが構築できない......
  - CentOS / Ubuntu 
  - [issues](https://github.com/electron/electron/issues/259)を見るにCentOS無理ぽ
  - Ubuntu構築経験が有る方、教えてください！
