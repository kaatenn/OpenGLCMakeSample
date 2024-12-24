file(GLOB_RECURSE files "*.cpp" "*.h" "*.hpp" "*.ipp")
list(APPEND total_files ${files})
set(third_party_files ${total_files} PARENT_SCOPE)