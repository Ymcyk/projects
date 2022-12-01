# Konstruktory i operatory przypisania

## Poprawna definicja operatora przypisania 

Kopiujący:

```cpp
Widget& Widget::operator=(const Widget& widget)
{
    print("Widget Widget::operator=(const Widget& widget)");
    return *this;
}
```

Przesuwający:

```cpp
Widget& Widget::operator=(Widget&& widget)
{
    print("Widget Widget::operator=(Widget&& widget)");
    return *this;
}
```

W obu zwracam `&`, a nie `&&` w przypadku przesuwającego. Dlatego, że w tych operatorach różnica jest jedynie w 
obiekcie w parametrze funkcji. Jeśli jest `&`, to obiekt może jeszcze żyć później. Jak jest `&&`, to możemy założyć, że
po wywołaniu tej funkcji będzie zniszczony, więc nie trzeba robić kopii. A oba są wykonywane na obiekcie po lewej stronie,
który jest oznaczany jako `Widget&` przy zwracanym argumencie. 