#ifndef DATABASE_UTILS_HPP
#define DATABASE_UTILS_HPP

// C++ standard libraries
#include <string>
#include <vector>

/**
 * Gets the SQL for a list of field names and types in the form "field_name1 TYPE1,field_name2 TYPE2,..."
 * @param field_names_and_types
 * @return The SQL
 */
std::string get_field_names_and_types_sql (const std::vector<std::pair<std::string, std::string>>& field_names_and_types);
/**
 * Gets the SQL for a list of field names in the form "field_name1,field_name2,..."
 * @param field_names_and_types
 * @return The SQL
 */
std::string get_field_names_sql (const std::vector<std::pair<std::string, std::string>>& field_names_and_types);
/**
 * Gets the SQL for a list of field names in the form "field_name1,field_name2,..."
 * @param field_names
 * @return The SQL
 */
std::string get_field_names_sql (const std::vector<std::string>& field_names);

/**
 * Gets the SQL for the given number of placeholders
 * @param num_placeholders
 * @return The SQL
 */
std::string get_placeholders_sql (size_t num_placeholders);
/**
 * Gets the SQL for the given number of numbered placeholders
 * @param num_placeholders
 * @return The SQL
 */
std::string get_numbered_placeholders_sql (size_t num_placeholders);

/**
 * Gets the SQL to set a list of fields to numbered placeholders in the form "field_name1 = ?1,field_name2 = ?2,..."
 * @param field_names_and_types
 * @param begin_ix Which field to start from
 * @return The SQL
 */
std::string get_numbered_set_field_sql (const std::vector<std::pair<std::string, std::string>>& field_names_and_types, size_t begin_ix);
/**
 * Gets the SQL to set a list of fields to numbered placeholders in the form "field_name1 = ?1,field_name2 = ?2,..."
 * @param field_names
 * @param begin_ix Which field to start from
 * @return The SQL
 */
std::string get_numbered_set_field_sql (const std::vector<std::string>& field_names, size_t begin_ix);

#endif // DATABASE_UTILS_HPP