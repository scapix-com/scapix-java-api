// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/SoftReference.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE_CACHEREF_FWD
#define SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE_CACHEREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ClassCache_CacheRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ClassCache_CacheRef>
{
	static constexpr fixed_string class_name = "java/io/ClassCache$CacheRef";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::SoftReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE_CACHEREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE_CACHEREF)
#define SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE_CACHEREF

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ClassCache_CacheRef : public jni::object_base<"java/io/ClassCache$CacheRef",
	java::lang::ref::SoftReference>
{
public:


protected:

	ClassCache_CacheRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE_CACHEREF
