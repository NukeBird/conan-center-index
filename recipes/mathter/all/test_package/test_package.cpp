#include <Mathter/Vector.hpp>
#include <iostream>

int main() {
    using Vec3 = mathter::Vector<float, 3>;
    Vec3 v1 = {1, 0, 3};
    Vec3 v2 = {2, 5, 3};
    auto r = v1 + v2;
    std::cout << "Mathter installation works." << std::endl;
#ifdef MATHTER_USE_XSIMD
    std::cout << "XSimd enabled." << std::endl;
#else
    std::cout << "XSimd disabled." << std::endl;
#endif
    return 0;
}
