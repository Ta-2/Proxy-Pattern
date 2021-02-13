#ifndef PROX_HPP
#define PROX_HPP

class Proxy_interface {
public:
  virtual void func() = 0;
  virtual ~Proxy_interface(){};
};

template <typename T>
class Proxy : public Proxy_interface{
private:
  T* t;
public:
  Proxy() : t(new T()){}
  ~Proxy() { delete t; }
  void func() {
    t->func();
  }
};

#endif
