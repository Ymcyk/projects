#pragma once

#include <cstdint>
#include <string>

namespace learn
{

class Widget
{
public:
    Widget();
    ~Widget();

    Widget(const Widget& widget);
    Widget& operator=(const Widget& widget);

    Widget(Widget&& widget);
    Widget& operator=(Widget&& widget);

private:
    uint32_t get_id() const noexcept;
    void print(const std::string& text) const;

private:
    const uint32_t id_;
};

}
