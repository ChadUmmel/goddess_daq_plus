file(REMOVE_RECURSE
  "libGoddessToolboxLib.pdb"
  "libGoddessToolboxLib.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/GoddessToolboxLib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
