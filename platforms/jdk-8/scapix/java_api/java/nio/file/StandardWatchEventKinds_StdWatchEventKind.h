// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/file/WatchEvent_Kind.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_STDWATCHEVENTKIND_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_STDWATCHEVENTKIND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class StandardWatchEventKinds_StdWatchEventKind; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::StandardWatchEventKinds_StdWatchEventKind>
{
	static constexpr fixed_string class_name = "java/nio/file/StandardWatchEventKinds$StdWatchEventKind";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::nio::file::WatchEvent_Kind>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_STDWATCHEVENTKIND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_STDWATCHEVENTKIND)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_STDWATCHEVENTKIND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::file::StandardWatchEventKinds_StdWatchEventKind : public jni::object_base<"java/nio/file/StandardWatchEventKinds$StdWatchEventKind",
	java::lang::Object,
	java::nio::file::WatchEvent_Kind>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Class> type() { return call_method<"type", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	StandardWatchEventKinds_StdWatchEventKind(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_STANDARDWATCHEVENTKINDS_STDWATCHEVENTKIND
