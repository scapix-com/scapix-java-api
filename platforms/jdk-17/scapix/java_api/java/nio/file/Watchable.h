// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHABLE_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class Watchable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::Watchable>
{
	static constexpr fixed_string class_name = "java/nio/file/Watchable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHABLE)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/file/WatchEvent_Kind.h>
#include <scapix/java_api/java/nio/file/WatchEvent_Modifier.h>
#include <scapix/java_api/java/nio/file/WatchKey.h>
#include <scapix/java_api/java/nio/file/WatchService.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::Watchable : public jni::object_base<"java/nio/file/Watchable",
	java::lang::Object>
{
public:

	jni::ref<java::nio::file::WatchKey> register_(jni::ref<java::nio::file::WatchService> p1, jni::ref<jni::array<java::nio::file::WatchEvent_Kind>> p2, jni::ref<jni::array<java::nio::file::WatchEvent_Modifier>> p3) { return call_method<"register", jni::ref<java::nio::file::WatchKey>>(p1, p2, p3); }
	jni::ref<java::nio::file::WatchKey> register_(jni::ref<java::nio::file::WatchService> p1, jni::ref<jni::array<java::nio::file::WatchEvent_Kind>> p2) { return call_method<"register", jni::ref<java::nio::file::WatchKey>>(p1, p2); }

protected:

	Watchable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHABLE
