# Move semantics

## Przesuwany typ jest `const`

Kiedy typ jest `const` to zamiast kontruktora lub operacji przypisania przesuwającej, odpali się wersja kopiująca!

```cpp
const Widget widget;
const Widget widget2 = std::move(widget); // nie można przesunąć widget, bo jest const. Konstruktor kopiujący
```
