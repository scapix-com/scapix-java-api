// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/fs/WindowsFileAttributeViews_Basic.h>
#include <scapix/java_api/java/nio/file/attribute/DosFileAttributeView.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS_DOS_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS_DOS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class WindowsFileAttributeViews_Dos; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::WindowsFileAttributeViews_Dos>
{
	static constexpr fixed_string class_name = "sun/nio/fs/WindowsFileAttributeViews$Dos";
	using base_classes = std::tuple<scapix::java_api::sun::nio::fs::WindowsFileAttributeViews_Basic, scapix::java_api::java::nio::file::attribute::DosFileAttributeView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS_DOS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS_DOS)
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS_DOS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::fs::WindowsFileAttributeViews_Dos : public jni::object_base<"sun/nio/fs/WindowsFileAttributeViews$Dos",
	sun::nio::fs::WindowsFileAttributeViews_Basic,
	java::nio::file::attribute::DosFileAttributeView>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	void setAttribute(jni::ref<java::lang::String> attribute, jni::ref<java::lang::Object> value) { return call_method<"setAttribute", void>(attribute, value); }
	jni::ref<java::util::Map> readAttributes(jni::ref<jni::array<java::lang::String>> attributes) { return call_method<"readAttributes", jni::ref<java::util::Map>>(attributes); }
	void setReadOnly(jboolean value) { return call_method<"setReadOnly", void>(value); }
	void setHidden(jboolean value) { return call_method<"setHidden", void>(value); }
	void setArchive(jboolean value) { return call_method<"setArchive", void>(value); }
	void setSystem(jboolean value) { return call_method<"setSystem", void>(value); }

protected:

	WindowsFileAttributeViews_Dos(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSFILEATTRIBUTEVIEWS_DOS
