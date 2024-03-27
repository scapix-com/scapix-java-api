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
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/android/os/ProxyFileDescriptorCallback.h>
#include <scapix/java_api/android/os/storage/OnObbStateChangeListener.h>
#include <scapix/java_api/android/os/storage/StorageVolume.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/UUID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::storage::StorageManager : public jni::object_base<"android/os/storage/StorageManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_MANAGE_STORAGE() { return get_static_field<"ACTION_MANAGE_STORAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_REQUESTED_BYTES() { return get_static_field<"EXTRA_REQUESTED_BYTES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_UUID() { return get_static_field<"EXTRA_UUID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::util::UUID> UUID_DEFAULT() { return get_static_field<"UUID_DEFAULT", jni::ref<java::util::UUID>>(); }

	jboolean mountObb(jni::ref<java::lang::String> rawPath, jni::ref<java::lang::String> key, jni::ref<android::os::storage::OnObbStateChangeListener> listener) { return call_method<"mountObb", jboolean>(rawPath, key, listener); }
	jboolean unmountObb(jni::ref<java::lang::String> rawPath, jboolean force, jni::ref<android::os::storage::OnObbStateChangeListener> listener) { return call_method<"unmountObb", jboolean>(rawPath, force, listener); }
	jboolean isObbMounted(jni::ref<java::lang::String> rawPath) { return call_method<"isObbMounted", jboolean>(rawPath); }
	jni::ref<java::lang::String> getMountedObbPath(jni::ref<java::lang::String> rawPath) { return call_method<"getMountedObbPath", jni::ref<java::lang::String>>(rawPath); }
	jni::ref<java::util::UUID> getUuidForPath(jni::ref<java::io::File> path) { return call_method<"getUuidForPath", jni::ref<java::util::UUID>>(path); }
	jni::ref<android::os::storage::StorageVolume> getStorageVolume(jni::ref<java::io::File> file) { return call_method<"getStorageVolume", jni::ref<android::os::storage::StorageVolume>>(file); }
	jni::ref<java::util::List> getStorageVolumes() { return call_method<"getStorageVolumes", jni::ref<java::util::List>>(); }
	jni::ref<android::os::storage::StorageVolume> getPrimaryStorageVolume() { return call_method<"getPrimaryStorageVolume", jni::ref<android::os::storage::StorageVolume>>(); }
	jboolean isEncrypted(jni::ref<java::io::File> file) { return call_method<"isEncrypted", jboolean>(file); }
	jni::ref<android::os::ParcelFileDescriptor> openProxyFileDescriptor(jint mode, jni::ref<android::os::ProxyFileDescriptorCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"openProxyFileDescriptor", jni::ref<android::os::ParcelFileDescriptor>>(mode, callback, handler); }
	jlong getCacheQuotaBytes(jni::ref<java::util::UUID> storageUuid) { return call_method<"getCacheQuotaBytes", jlong>(storageUuid); }
	jlong getCacheSizeBytes(jni::ref<java::util::UUID> storageUuid) { return call_method<"getCacheSizeBytes", jlong>(storageUuid); }
	jlong getAllocatableBytes(jni::ref<java::util::UUID> storageUuid) { return call_method<"getAllocatableBytes", jlong>(storageUuid); }
	void allocateBytes(jni::ref<java::util::UUID> storageUuid, jlong bytes) { return call_method<"allocateBytes", void>(storageUuid, bytes); }
	void allocateBytes(jni::ref<java::io::FileDescriptor> fd, jlong bytes) { return call_method<"allocateBytes", void>(fd, bytes); }
	void setCacheBehaviorGroup(jni::ref<java::io::File> path, jboolean group) { return call_method<"setCacheBehaviorGroup", void>(path, group); }
	jboolean isCacheBehaviorGroup(jni::ref<java::io::File> path) { return call_method<"isCacheBehaviorGroup", jboolean>(path); }
	void setCacheBehaviorTombstone(jni::ref<java::io::File> path, jboolean tombstone) { return call_method<"setCacheBehaviorTombstone", void>(path, tombstone); }
	jboolean isCacheBehaviorTombstone(jni::ref<java::io::File> path) { return call_method<"isCacheBehaviorTombstone", jboolean>(path); }

protected:

	StorageManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_STORAGE_STORAGEMANAGER
