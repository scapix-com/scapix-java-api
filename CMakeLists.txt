cmake_minimum_required(VERSION 3.20...3.29)

project(scapix-java-api CXX)

if(ANDROID_PLATFORM)
  set(platform ${ANDROID_PLATFORM})
else()
  find_package(Java COMPONENTS Development)
  if(Java_FOUND)
    if(Java_VERSION_MAJOR EQUAL 1)
      set(platform jdk-${Java_VERSION_MINOR})
    else()
      set(platform jdk-${Java_VERSION_MAJOR})
    endif()
  else()
    set(platform jdk-21)
  endif()
endif()

set(SCAPIX_JAVA_API "${platform}" CACHE STRING "Java platform - android-34, jdk-21, etc.")

message(STATUS "SCAPIX_JAVA_API: ${SCAPIX_JAVA_API}")

add_library(scapix_java_api INTERFACE)
add_library(scapix::java_api ALIAS scapix_java_api)

target_include_directories(scapix_java_api INTERFACE platforms/${SCAPIX_JAVA_API})

find_package(ScapixJNI REQUIRED)
target_link_libraries(scapix_java_api INTERFACE scapix::jni)

file(GLOB_RECURSE java_api_sources CONFIGURE_DEPENDS platforms/${SCAPIX_JAVA_API}/scapix/java_api/*)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}/platforms/${SCAPIX_JAVA_API}/scapix/java_api" PREFIX "${SCAPIX_JAVA_API}" FILES ${java_api_sources})
target_sources(scapix_java_api PRIVATE ${java_api_sources})

function(scapix_java_api_source_group)
    scapix_jni_source_group()
endfunction()
