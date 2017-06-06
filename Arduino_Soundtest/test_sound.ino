#define BEAT 300 // 音の長さ
#define PINNO 12 // 接続ピン番号

void setup() // セットアップ関数
  {

  }

void loop() // 無限ループ
  {
    tone(PINNO,262,BEAT) ; // ド
    delay(BEAT) ; // BEATに設定した時間だけ待機
    tone(PINNO,294,BEAT) ; // レ
    delay(BEAT) ;
    tone(PINNO,330,BEAT) ; // ミ
    delay(BEAT) ;
    tone(PINNO,349,BEAT) ; // ファ
    delay(BEAT) ;
    tone(PINNO,392,BEAT) ; // ソ
    delay(BEAT) ;
    tone(PINNO,440,BEAT) ; // ラ
    delay(BEAT) ;
    tone(PINNO,494,BEAT) ; // シ
    delay(BEAT) ;
    tone(PINNO,523,BEAT) ; // ド
    delay(1000) ; // 1sec待機
  }
