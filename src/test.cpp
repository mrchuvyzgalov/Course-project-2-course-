#include "test_modulo_operations.h"
#include "test_fraction.h"
#include "test_decision.h"
#include "test_bigint.h"

#include <iostream>

int main() {
    test_operations::TestAllOperations();

    std::cerr << "\n";

    test_fraction::TestFraction();

    std::cerr << "\n";

    test_decision::TestAlldecisions();

    std::cerr << "\n";

    test_bigint::TestBigInt();
    return 0;
}