#include <Morse.h>

void setup() {
  Serial.begin(19200);//设置通信波特率
}

void loop() {
  String str = "";  //定义小写字符
  int i, t ;
  int n = 0;  //对传入字符个数计数
  while (Serial.available() > 0) {
    str += char(Serial.read());  //将传入的数据储存在字符串中
    delay(2);  
    n++;
  }

 
    //查询Morse电码表并进行转换
    for (i = 0; i < n; i++)
    {
      Morse.transfor(str[i]);
      }//使用转换的函数
      
      delay(2);
  
  
}
