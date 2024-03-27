// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE_FWD
#define SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ClassCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ClassCache>
{
	static constexpr fixed_string class_name = "java/io/ClassCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE)
#define SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ClassCache : public jni::object_base<"java/io/ClassCache",
	java::lang::Object>
{
public:


protected:

	ClassCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_CLASSCACHE
