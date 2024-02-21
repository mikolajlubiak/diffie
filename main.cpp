#include "diffie.hpp"
#include <cstdint>
#include <iostream>

int main() {
  const uint64_t BASE = 9;
  const uint64_t MODULUS = 23;
  Diffie alice{BASE, 42, MODULUS};
  Diffie bob{BASE, 13, MODULUS};

  std::cout << alice.Exchange() << '\n' << alice.SharedSecret(bob) << '\n';
  std::cout << bob.Exchange() << '\n' << bob.SharedSecret(alice) << '\n';
}
