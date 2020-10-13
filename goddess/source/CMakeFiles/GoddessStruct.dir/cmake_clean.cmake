file(REMOVE_RECURSE
  "libGoddessStruct.pdb"
  "libGoddessStruct.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/GoddessStruct.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
