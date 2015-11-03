<!-- .slide: data-background-transition: "slide" -->

## Inc技術脱却のためのdocker 入門

2015/11

darai

---

### 目的

- Erlang を使ってみる

---

## Inc技術/汎用技術比較


---

## Who is docker ?

- OSS for automation

---

# Error Tips

- Get http:///var/run/docker.sock/v1.19/version: dial unix /var/run/docker.sock: no such file or directory. Are you trying to connect to a TLS-enabled daemon without TLS?
  - option typoなど。ログを確認: $systemctl status docker.service -l
  - libdevmapper.soがない: $yum -y install libdevmapper.so.1.02


