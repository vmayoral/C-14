# C++14 code examples

### Generalized lambda

Traditionally, one would define type agonostic
operations using a template as:

```C++
template <typename T>
T func(T z) {
    return z * z;
}
```

With C++14, we can now use generalized lambdas like
```C++
auto func = [](auto input) { return input * input; };
```

Compile and try with:
```
clang++ -std=c++14 -pedantic -Wall -stdlib=libc++ generalized_lambda.cpp -o test; ./test
```

### Sources
- http://www.drdobbs.com/cpp/the-c14-standard-what-you-need-to-know/240169034?pgno=2
- https://isocpp.org/wiki/faq/cpp14-language
