// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_FILEOBSERVER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_FILEOBSERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class FileObserver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::FileObserver>
{
	static constexpr fixed_string class_name = "android/os/FileObserver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_FILEOBSERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_FILEOBSERVER)
#define SCAPIX_JAVA_API_ANDROID_OS_FILEOBSERVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::FileObserver : public jni::object_base<"android/os/FileObserver",
	java::lang::Object>
{
public:

	static jint ACCESS() { return get_static_field<"ACCESS", jint>(); }
	static jint ALL_EVENTS() { return get_static_field<"ALL_EVENTS", jint>(); }
	static jint ATTRIB() { return get_static_field<"ATTRIB", jint>(); }
	static jint CLOSE_NOWRITE() { return get_static_field<"CLOSE_NOWRITE", jint>(); }
	static jint CLOSE_WRITE() { return get_static_field<"CLOSE_WRITE", jint>(); }
	static jint CREATE() { return get_static_field<"CREATE", jint>(); }
	static jint DELETE() { return get_static_field<"DELETE", jint>(); }
	static jint DELETE_SELF() { return get_static_field<"DELETE_SELF", jint>(); }
	static jint MODIFY() { return get_static_field<"MODIFY", jint>(); }
	static jint MOVED_FROM() { return get_static_field<"MOVED_FROM", jint>(); }
	static jint MOVED_TO() { return get_static_field<"MOVED_TO", jint>(); }
	static jint MOVE_SELF() { return get_static_field<"MOVE_SELF", jint>(); }
	static jint OPEN() { return get_static_field<"OPEN", jint>(); }

	static jni::ref<android::os::FileObserver> new_object(jni::ref<java::lang::String> path) { return base_::new_object(path); }
	static jni::ref<android::os::FileObserver> new_object(jni::ref<java::lang::String> path, jint mask) { return base_::new_object(path, mask); }
	void startWatching() { return call_method<"startWatching", void>(); }
	void stopWatching() { return call_method<"stopWatching", void>(); }
	void onEvent(jint p1, jni::ref<java::lang::String> p2) { return call_method<"onEvent", void>(p1, p2); }

protected:

	FileObserver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_FILEOBSERVER
