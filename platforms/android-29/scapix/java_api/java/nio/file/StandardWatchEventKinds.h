// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class StandardWatchEventKinds; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::StandardWatchEventKinds>
{
	static constexpr fixed_string class_name = "java/nio/file/StandardWatchEventKinds";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/file/WatchEvent_Kind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::StandardWatchEventKinds : public jni::object_base<"java/nio/file/StandardWatchEventKinds",
	java::lang::Object>
{
public:

	static jni::ref<java::nio::file::WatchEvent_Kind> ENTRY_CREATE() { return get_static_field<"ENTRY_CREATE", jni::ref<java::nio::file::WatchEvent_Kind>>(); }
	static jni::ref<java::nio::file::WatchEvent_Kind> ENTRY_DELETE() { return get_static_field<"ENTRY_DELETE", jni::ref<java::nio::file::WatchEvent_Kind>>(); }
	static jni::ref<java::nio::file::WatchEvent_Kind> ENTRY_MODIFY() { return get_static_field<"ENTRY_MODIFY", jni::ref<java::nio::file::WatchEvent_Kind>>(); }
	static jni::ref<java::nio::file::WatchEvent_Kind> OVERFLOW() { return get_static_field<"OVERFLOW", jni::ref<java::nio::file::WatchEvent_Kind>>(); }


protected:

	StandardWatchEventKinds(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS
