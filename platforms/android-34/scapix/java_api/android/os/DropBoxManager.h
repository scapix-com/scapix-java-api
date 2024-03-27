// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_DROPBOXMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_DROPBOXMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class DropBoxManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::DropBoxManager>
{
	static constexpr fixed_string class_name = "android/os/DropBoxManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_DROPBOXMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_DROPBOXMANAGER)
#define SCAPIX_JAVA_API_ANDROID_OS_DROPBOXMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/DropBoxManager_Entry.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::DropBoxManager : public jni::object_base<"android/os/DropBoxManager",
	java::lang::Object>
{
public:

	using Entry = DropBoxManager_Entry;

	static jni::ref<java::lang::String> ACTION_DROPBOX_ENTRY_ADDED() { return get_static_field<"ACTION_DROPBOX_ENTRY_ADDED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_DROPPED_COUNT() { return get_static_field<"EXTRA_DROPPED_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_TAG() { return get_static_field<"EXTRA_TAG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_TIME() { return get_static_field<"EXTRA_TIME", jni::ref<java::lang::String>>(); }
	static jint IS_EMPTY() { return get_static_field<"IS_EMPTY", jint>(); }
	static jint IS_GZIPPED() { return get_static_field<"IS_GZIPPED", jint>(); }
	static jint IS_TEXT() { return get_static_field<"IS_TEXT", jint>(); }

	void addText(jni::ref<java::lang::String> tag, jni::ref<java::lang::String> data) { return call_method<"addText", void>(tag, data); }
	void addData(jni::ref<java::lang::String> tag, jni::ref<jni::array<jbyte>> data, jint flags) { return call_method<"addData", void>(tag, data, flags); }
	void addFile(jni::ref<java::lang::String> tag, jni::ref<java::io::File> file, jint flags) { return call_method<"addFile", void>(tag, file, flags); }
	jboolean isTagEnabled(jni::ref<java::lang::String> tag) { return call_method<"isTagEnabled", jboolean>(tag); }
	jni::ref<android::os::DropBoxManager_Entry> getNextEntry(jni::ref<java::lang::String> tag, jlong msec) { return call_method<"getNextEntry", jni::ref<android::os::DropBoxManager_Entry>>(tag, msec); }

protected:

	DropBoxManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_DROPBOXMANAGER