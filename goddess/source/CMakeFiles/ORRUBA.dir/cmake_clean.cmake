file(REMOVE_RECURSE
  "libORRUBA.pdb"
  "libORRUBA.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/ORRUBA.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
