#include <json.hpp>

using namespace nlohmann;

int main()
{
    // create a JSON value with default null value
    json j;

    // serialize the JSON null value
    std::cout << j << '\n';
}
