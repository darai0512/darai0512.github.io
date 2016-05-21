## github pages

In order to make your page public, it is generally easy the way to make '<USER_NAME>.github.io' repository.  
Or, you can use 'gh-pages' branch.  

```bash
# in case of using gh-pages branch(make orphan branch = independent on the other branch)
$git checkout --orphan gh-pages
$git add .
$git commit -m'opens gh-pages'
$git remote add gh-pages git@git.corp.yahoo.co.jp:darai/talks.git
$git push origin gh-pages
```

In detail, see the following site:
http://qiita.com/budougumi0617/items/221bb946d1c90d6769e9

## setup reveal.js

```
$wget https://github.com/hakimel/reveal.js/archive/3.1.0.tar.gz
$tar -xzvf 3.1.0.tar.gz -C . 

$vi index.html
# setup theme(= change background and animation)
# XXX.css: http://qiita.com/tbpgr/items/1782561aaa734e5edf8d
<link rel="stylesheet" href="css/theme/XXX.css" id="theme">
  
# setup reading markdown file(= XXX.md) to 'data-' property
<section data-markdown="XXX.md" ...>
  
# the following sentense should be in XXX.md
$echo -e '<!-- .slide: data-background-transition: "slide" -->\n\n## test' > XXX.md
```

## setup impress.js

Prepare [Gemfile](https://github.com/tsucchi/ruby-markdown2impress),  
and use the following command if you don't have Gemfile.lock file.

```
$sudo gem install bundler
$bundle
$bundle list
Gems included by the bundle:
  * bundler (1.11.2)
  * eventmachine (1.0.9.1)
  * markdown2impress (0.0.1 f9eaa89)
  * mini_portile2 (2.0.0)
  * nokogiri (1.6.7.2)
  * posix-spawn (0.3.11)
  * pygments.rb (0.6.3)
  * redcarpet (3.3.4)
  * yajl-ruby (1.2.1)
$bundle exec markdown2impress README.md
```

## access

adds the following URL to directory name  
http://darai0512.github.io/<DIR_NAME>/
