#include <stdio.h>
#include <utility>

class shape
{
  public:
    virtual ~shape()
    {
    }
};

class circle : public shape
{
  public:
    circle()
    {
    }
    ~circle()
    {
    }
};

void foo(const shape &s)
{
    puts("foo(const shape&)");
}

void foo(shape &&)
{
    puts("foo(shape&&)");
}

// void bar(const shape &s)
// {
//     puts("bar(shape&&)");
//     foo(s);
// }

template <typename T> void bar(T &&s)
{
    foo(std::forward<T>(s));
}

int main()
{
    circle temp;
    bar(temp);
    bar(circle());
}