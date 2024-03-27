// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHSERVICE_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class WatchService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::WatchService>
{
	static constexpr fixed_string class_name = "java/nio/file/WatchService";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHSERVICE)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/file/WatchKey.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::WatchService : public jni::object_base<"java/nio/file/WatchService",
	java::lang::Object,
	java::io::Closeable>
{
public:

	void close() { return call_method<"close", void>(); }
	jni::ref<java::nio::file::WatchKey> poll() { return call_method<"poll", jni::ref<java::nio::file::WatchKey>>(); }
	jni::ref<java::nio::file::WatchKey> poll(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"poll", jni::ref<java::nio::file::WatchKey>>(p1, p2); }
	jni::ref<java::nio::file::WatchKey> take() { return call_method<"take", jni::ref<java::nio::file::WatchKey>>(); }

protected:

	WatchService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_WATCHSERVICE