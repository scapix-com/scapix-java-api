// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_PATHS_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_PATHS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class Paths; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::Paths>
{
	static constexpr fixed_string class_name = "java/nio/file/Paths";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_PATHS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_PATHS)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_PATHS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/nio/file/Path.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::Paths : public jni::object_base<"java/nio/file/Paths",
	java::lang::Object>
{
public:

	static jni::ref<java::nio::file::Path> get(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_static_method<"get", jni::ref<java::nio::file::Path>>(p1, p2); }
	static jni::ref<java::nio::file::Path> get(jni::ref<java::net::URI> p1) { return call_static_method<"get", jni::ref<java::nio::file::Path>>(p1); }

protected:

	Paths(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_PATHS
