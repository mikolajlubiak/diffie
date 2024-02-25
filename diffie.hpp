#include <cmath>
#include <cstdint>

class Diffie {
  uint64_t base; // prime number
  uint64_t secret;
  uint64_t modulus; // primitive root for base

public:
  Diffie(const uint64_t base, const uint64_t secret, const uint64_t modulus)
      : base(base), secret(secret), modulus(modulus) {}

  uint64_t Exchange() const {
    return static_cast<uint64_t>(std::pow(base, secret)) % modulus;
  }

  uint64_t SharedSecret(const Diffie &d) const {
    return static_cast<uint64_t>(std::pow(d.Exchange(), secret));
  }
};
