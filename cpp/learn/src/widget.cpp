#include "widget.hpp"

#include <iostream>

using namespace learn;

Widget::Widget() : id_{get_id()}
{
    print("Widget::Widget()");
}

Widget::~Widget()
{
    print("Widget::~Widget()");
}

Widget::Widget(const Widget& widget) : id_{get_id()}
{
    print("Widget::Widget(const Widget& widget)");
}

Widget& Widget::operator=(const Widget& widget)
{
    print("Widget Widget::operator=(const Widget& widget)");
    return *this;
}

Widget::Widget(Widget&& widget) : id_{get_id()}
{
    print("Widget::Widget(Widget&& widget)");
}

Widget& Widget::operator=(Widget&& widget)
{
    print("Widget Widget::operator=(Widget&& widget)");
    return *this;
}

uint32_t Widget::get_id() const noexcept
{
    static uint32_t id {0};
    return id++;
}

void Widget::print(const std::string& text) const
{
    std::cout << id_ << ": " << text << '\n';
};
