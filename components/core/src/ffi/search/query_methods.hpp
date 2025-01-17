#ifndef FFI_SEARCH_QUERY_METHODS_HPP
#define FFI_SEARCH_QUERY_METHODS_HPP

// C++ standard libraries
#include <string>
#include <string_view>
#include <variant>
#include <vector>

// Project headers
#include "CompositeWildcardToken.hpp"
#include "ExactVariableToken.hpp"
#include "WildcardToken.hpp"

namespace ffi::search {
    template <typename encoded_variable_t>
    void generate_subqueries (
            std::string_view wildcard_query,
            std::vector<
                    std::pair<
                            std::string,
                            std::vector<
                                    std::variant<
                                            ExactVariableToken<encoded_variable_t>,
                                            WildcardToken<encoded_variable_t>
                                    >
                            >
                    >
            >& sub_queries
    );
}

#endif // FFI_SEARCH_QUERY_METHODS_HPP
