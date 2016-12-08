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
clang++ -std=c++1y -pedantic -Wall -stdlib=libc++ generalized_lambda.cpp -o test; ./test
```
