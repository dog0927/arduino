/* LEDをゆっくり点灯・消灯 
PWM制御でLEDの明るさを調整しよう

今回は、Arduino Uno、ブレッドボード、USBケーブル、ジャンプワイヤー×2、抵抗(330Ω)、LEDをご準備下さい。
抵抗が330Ω以下だとLEDが眩しくて目に悪いので注意してくださいね。

PWM信号が出力できるピンに接続しよう！
LED編その①、その②ではピンからデジタル信号を出力していましたが、今回はPWM信号を出力します。
こちらでも解説しましたが、PWM信号が出力できるピンはデジタルピンの内、〜が付いています。
つまり、3、5、6、9、10、11ピンが該当します。どれを使っても良いですが、今回は5ピンを使用します。

https://zakkuri-kaisetsu.com/led3/


*/

int led = 5;
int wait =10;
int jump =1;

void setup() {
}

void loop() {
  
    int i = 0;                // iをここで宣言し、0を代入
    while(i <= 255) {
      analogWrite(led, i);
      delay(wait);
      i = i + jump;           // iをjump分加算
    }
    
    i =255;
    while(i >= 0){
      analogWrite(led, i);
      delay(wait);
      i = i - jump;           // iをjump分減算
    }
    
    delay(1000);              //消灯→点灯を自然なタイミングにする
}
