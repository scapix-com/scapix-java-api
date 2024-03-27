// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/file/FileStore.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESTORE_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class WindowsFileStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::WindowsFileStore>
{
	static constexpr fixed_string class_name = "sun/nio/fs/WindowsFileStore";
	using base_classes = std::tuple<scapix::java_api::java::nio::file::FileStore>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESTORE)
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/attribute/FileStoreAttributeView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::fs::WindowsFileStore : public jni::object_base<"sun/nio/fs/WindowsFileStore",
	java::nio::file::FileStore>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> type() { return call_method<"type", jni::ref<java::lang::String>>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jlong getTotalSpace() { return call_method<"getTotalSpace", jlong>(); }
	jlong getUsableSpace() { return call_method<"getUsableSpace", jlong>(); }
	jlong getBlockSize() { return call_method<"getBlockSize", jlong>(); }
	jlong getUnallocatedSpace() { return call_method<"getUnallocatedSpace", jlong>(); }
	jni::ref<java::nio::file::attribute::FileStoreAttributeView> getFileStoreAttributeView(jni::ref<java::lang::Class> type) { return call_method<"getFileStoreAttributeView", jni::ref<java::nio::file::attribute::FileStoreAttributeView>>(type); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::String> attribute) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(attribute); }
	jboolean supportsFileAttributeView(jni::ref<java::lang::Class> type) { return call_method<"supportsFileAttributeView", jboolean>(type); }
	jboolean supportsFileAttributeView(jni::ref<java::lang::String> name) { return call_method<"supportsFileAttributeView", jboolean>(name); }
	jboolean equals(jni::ref<java::lang::Object> ob) { return call_method<"equals", jboolean>(ob); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	WindowsFileStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILESTORE
