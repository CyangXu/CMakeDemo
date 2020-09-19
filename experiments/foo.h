#ifndef EXPERIMENTS_FOO_H_
#define EXPERIMENTS_FOO_H_

namespace experiment {

// Foo class.
class Foo {
public:
  Foo() = default;
  virtual ~Foo() = default;

  virtual void Print();
};

} // namespace experiment

#endif // EXPERIMENTS_FOO_H_