<!-- .slide: data-background-transition: "slide" -->

## アルゴリズムについて

2015/07/22  
darai

参考文献：プログラミングコンテスト攻略のためのアルゴリズムとデータ構造（渡部有隆）

---

### 目的

効果的なアルゴリズムを意識することで、以下を実現  
  
1. 引き継ぎ後に（手入れされないことで）バグが生まれるコードをなくす  
2. 後輩からの尊敬を得る  

---

### example

10人分のプレイヤーの得点（100点満点）が記録されたデータから、上位3人を得点順に出力  

入力例  
25 36 4 55 71 18 0 71 89 65  
出力例  
89 71 71  

---

### solution

1. 3回探索
配列A[10]に格納 → 最大値を出力 → 取り除き再度最大値を探査
2. ソート後に出力
配列A[10]に格納 → 降順ソート  
3. 各特典毎の人数を数える  
得点pを獲得した人数を配列B[p]に記録 → B[100],B[99]...と出力

---

### メリデメ

1. 3回探索
単純だがsortが使えるなら2が簡潔
2. ソート後に出力
ソートの方法次第で早さが変わる？  
3. 各特典毎の人数を数える  
汎用性があるが、場合によってはメモリを多く消費する

---

### Q1

0 から INTMAX の数字がRandomに並んでいる。しかし実際にはある整数Nが抜けている(総数はINTMAX - 1)。  
Nを調べなさい。   

メモリ制限: 1GB  
時間制限: なし 

---

### Hint

0 to INTMAX-1の配列を持とうとすると、必要なメモリは  
2^31 * 4byte / 1024 / 1024 / 1024 = 8Gbyte

exの解3のように一つずつ調べていく方法だとメモリ制限に引っかかる。

---

### A1

1. for文の中で、Sum(合計)だけを保持する  

    #include <stdio.h>
    #include <stdlib.h>
    int main(void)
    {
	    FILE *fp;
	    char s[INTMAX - 1];
	    unsigned long long sum_real;
	    unsigned long long sum_ideal = ??; /* ??=0からINTMAXの和 */
	    fp = fopen("q1.txt", "r");
      while (fgets(s, INTMAX - 1, fp) != NULL) {
        sum_real += atoi( s );
      }
      fclose(fp);
      printf("ans=%d", sum_ideal - sum_real);
      return 0;
    }

2. 数字一つを表す方法を、int(4byte)より小さくする

---
