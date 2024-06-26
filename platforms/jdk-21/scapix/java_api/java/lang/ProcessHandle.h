// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_PROCESSHANDLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSHANDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ProcessHandle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ProcessHandle>
{
	static constexpr fixed_string class_name = "java/lang/ProcessHandle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSHANDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_PROCESSHANDLE)
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSHANDLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ProcessHandle_Info.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/concurrent/CompletableFuture.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ProcessHandle : public jni::object_base<"java/lang/ProcessHandle",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	using Info = ProcessHandle_Info;

	jlong pid() { return call_method<"pid", jlong>(); }
	static jni::ref<java::util::Optional> of(jlong pid) { return call_static_method<"of", jni::ref<java::util::Optional>>(pid); }
	static jni::ref<java::lang::ProcessHandle> current() { return call_static_method<"current", jni::ref<java::lang::ProcessHandle>>(); }
	jni::ref<java::util::Optional> parent() { return call_method<"parent", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::stream::Stream> children() { return call_method<"children", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::stream::Stream> descendants() { return call_method<"descendants", jni::ref<java::util::stream::Stream>>(); }
	static jni::ref<java::util::stream::Stream> allProcesses() { return call_static_method<"allProcesses", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::lang::ProcessHandle_Info> info() { return call_method<"info", jni::ref<java::lang::ProcessHandle_Info>>(); }
	jni::ref<java::util::concurrent::CompletableFuture> onExit() { return call_method<"onExit", jni::ref<java::util::concurrent::CompletableFuture>>(); }
	jboolean supportsNormalTermination() { return call_method<"supportsNormalTermination", jboolean>(); }
	jboolean destroy() { return call_method<"destroy", jboolean>(); }
	jboolean destroyForcibly() { return call_method<"destroyForcibly", jboolean>(); }
	jboolean isAlive() { return call_method<"isAlive", jboolean>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint compareTo(jni::ref<java::lang::ProcessHandle> p1) { return call_method<"compareTo", jint>(p1); }

protected:

	ProcessHandle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSHANDLE
