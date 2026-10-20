#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    // Вариант 28. Расходы за месяц по категориям
    int expenses[] = {
        4200, 18500, 7600, 3200,
        5400, 8900, 2100, 6700
    };
    const std::size_t n = sizeof(expenses) / sizeof(expenses[0]);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Расходы по категориям: ";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << expenses[i] << ' ';
    }
    std::cout << '\n';
    std::cout << "Количество категорий: " << n << '\n';

    std::cout << "Общая сумма расходов: " << arr_sum(expenses, n)     << '\n';
    std::cout << "Минимальный расход: "   << arr_min(expenses, n)     << '\n';
    std::cout << "Максимальный расход: "  << arr_max(expenses, n)     << '\n';
    std::cout << "Средний расход: "       << arr_average(expenses, n) << '\n';
    std::cout << "Медиана расходов: "     << arr_median(expenses, n)  << '\n';

    return 0;
}
