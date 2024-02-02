#include <bitset>
#include <cstdint>
#include <iostream>

int main() {
  [[maybe_unused]] constexpr std::uint8_t opt_viewed{0x01};
  [[maybe_unused]] constexpr std::uint8_t opt_edited{0x02};
  [[maybe_unused]] constexpr std::uint8_t opt_favorited{0x04};
  [[maybe_unused]] constexpr std::uint8_t opt_shared{0x08};
  [[maybe_unused]] constexpr std::uint8_t opt_deleted{0x10};

  std::uint8_t myArticleFlags{opt_favorited | opt_viewed};

  std::cout << "fav article (bit 2): ";
  std::cout << std::bitset<8>{myArticleFlags} << '\n';

  std::cout << "article deleted (bit 4)? "
            << (myArticleFlags & opt_deleted ? "yes\n" : "no\n");

  myArticleFlags &= static_cast<std::uint8_t>(~opt_favorited);
  std::cout << "article unfav: ";
  std::cout << std::bitset<8>{myArticleFlags} << '\n';

  return 0;
}
