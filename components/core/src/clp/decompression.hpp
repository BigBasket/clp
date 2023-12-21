#ifndef CLP_DECOMPRESSION_HPP
#define CLP_DECOMPRESSION_HPP

#include <string>
#include <unordered_set>

#include "CommandLineArguments.hpp"

namespace clp {
/**
 * Decompresses an archive into the given directory
 * @param command_line_args
 * @param files_to_decompress
 * @return true if decompression was successful, false otherwise
 */
bool decompress(
        CommandLineArguments& command_line_args,
        std::unordered_set<std::string> const& files_to_decompress
);
}  // namespace clp

#endif  // CLP_DECOMPRESSION_HPP
