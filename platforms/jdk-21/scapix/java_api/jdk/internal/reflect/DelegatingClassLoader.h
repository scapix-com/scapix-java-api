// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ClassLoader.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_DELEGATINGCLASSLOADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_DELEGATINGCLASSLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class DelegatingClassLoader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::DelegatingClassLoader>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/DelegatingClassLoader";
	using base_classes = std::tuple<scapix::java_api::java::lang::ClassLoader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_DELEGATINGCLASSLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_DELEGATINGCLASSLOADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_DELEGATINGCLASSLOADER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::DelegatingClassLoader : public jni::object_base<"jdk/internal/reflect/DelegatingClassLoader",
	java::lang::ClassLoader>
{
public:


protected:

	DelegatingClassLoader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_DELEGATINGCLASSLOADER