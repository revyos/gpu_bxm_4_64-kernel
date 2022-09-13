# Install script for directory: /home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/llvm

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "MinSizeRel")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/llvm/include/llvm"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/llvm/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/LICENSE\\.TXT$" REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/include/llvm"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/CMakeFiles$" EXCLUDE REGEX "/config\\.h$" EXCLUDE REGEX "/\\.svn$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/lib/Demangle/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/lib/Support/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/lib/TableGen/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/utils/TableGen/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/include/llvm/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/lib/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/utils/FileCheck/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/utils/PerfectShuffle/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/utils/count/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/utils/not/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/utils/yaml-bench/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/projects/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/tools/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/runtimes/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/examples/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/docs/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/cmake/modules/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/utils/llvm-lit/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/utils/benchmark/cmake_install.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/benchmarks/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.tblgen/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
