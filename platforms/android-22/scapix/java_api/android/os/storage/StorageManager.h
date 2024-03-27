// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os::storage { class StorageManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::storage::StorageManager>
{
	static constexpr fixed_string class_name = "android/os/storage/StorageManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEMANAGER)
#define SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/storage/OnObbStateChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::storage::StorageManager : public jni::object_base<"android/os/storage/StorageManager",
	java::lang::Object>
{
public:

	jboolean mountObb(jni::ref<java::lang::String> rawPath, jni::ref<java::lang::String> key, jni::ref<android::os::storage::OnObbStateChangeListener> listener) { return call_method<"mountObb", jboolean>(rawPath, key, listener); }
	jboolean unmountObb(jni::ref<java::lang::String> rawPath, jboolean force, jni::ref<android::os::storage::OnObbStateChangeListener> listener) { return call_method<"unmountObb", jboolean>(rawPath, force, listener); }
	jboolean isObbMounted(jni::ref<java::lang::String> rawPath) { return call_method<"isObbMounted", jboolean>(rawPath); }
	jni::ref<java::lang::String> getMountedObbPath(jni::ref<java::lang::String> rawPath) { return call_method<"getMountedObbPath", jni::ref<java::lang::String>>(rawPath); }

protected:

	StorageManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEMANAGER
