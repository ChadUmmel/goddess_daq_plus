file(REMOVE_RECURSE
  "libGoddessAnalysis.pdb"
  "libGoddessAnalysis.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/GoddessAnalysis.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
