## آزمایش شماره یک 💡

### گزارش کار و مراحل 📝

هدف ما در این آزمایش درک عملکرد یک کلید فشاری ( push button ) در مدار می باشد. می خواهیم کلید را طوری تنظیم کنیم که هر گاه فشار داده شد لامپ LED روشن شود و در غیر این صورت زمانی که کلید فشار داده نشده است LED همچنان خاموش بماند.  
همچنین اینکه در اینجا ما از مقاومت به طور پایین کش ( pulldown ) استفاده کرده ایم. یعنی اینکه در حالت باز بودن کلید، مقاومت سطح ولتاژ ورودی به کلید را بر روی **صفر** تنظیم کرده است اما هر گاه کلید بسته شود سطح ولتاژ پایه ورودی **یک** خواهد شد.

---

### توصیف کد های برنامه 💻

```cpp
int button = 8;
int led = 7;
int buttonState = 0;    // حالت ولتاژ ورودی کلید
void setup() {
pinMode(button, INPUT);
pinMode(led, OUTPUT);
}
void loop() {
buttonState = digitalRead(button);  // خواندن ولتاژ ورودی کلید
if (buttonState == HIGH)  // اگر ولتاژ ورودی کلید بالا بود شرط اجرا می شود
  {
  digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}
```

---

### شرح کارکرد مدار به صورت ویدیویی 📽️

![micro and circuit](/media/microprocessor_4.gif)

---

### شماتیک مدار 🗺️

![micro and circuit](/media/schematic_3.jpg)
