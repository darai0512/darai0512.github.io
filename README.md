reveal.jsを使ってみた
==============

## 1.GitHub Pages準備

```bash
$wget https://github.com/hakimel/reveal.js/archive/3.1.0.tar.gz
$tar -xzvf 3.1.0.tar.gz -C . 
# dir調整
# orphanブランチ(他のブランチから独立したブランチ)で作成
$git checkout --orphan gh-pages
$git add .
$git commit -m'reveal.js練習用'
$git remote add gh-pages git@git.corp.yahoo.co.jp:darai/study.git
$git push origin gh-pages
  
$echo -e '<!-- .slide: data-background-transition: "slide" -->\n\n## test' > test.md
$vi index.html
#themaを変える場合は以下XXXを変更
<link rel="stylesheet" href="css/theme/XXX.css" id="theme">
#markdownファイルを読み込むようsectionタグ内を設定
<section data-markdown="test.md"
         data-separator="\n---\n$"
         data-vertical="\n--\n"
         data-notes="^Note:"
         data-charset="UTF-8">
<script type="text/template"></script>
</section>
```
<http://darai0512.github.io/>で確認  
