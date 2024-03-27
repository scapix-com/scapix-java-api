// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/fs/AbstractAclFileAttributeView.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSACLFILEATTRIBUTEVIEW_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSACLFILEATTRIBUTEVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class WindowsAclFileAttributeView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::WindowsAclFileAttributeView>
{
	static constexpr fixed_string class_name = "sun/nio/fs/WindowsAclFileAttributeView";
	using base_classes = std::tuple<scapix::java_api::sun::nio::fs::AbstractAclFileAttributeView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSACLFILEATTRIBUTEVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSACLFILEATTRIBUTEVIEW)
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSACLFILEATTRIBUTEVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/file/attribute/UserPrincipal.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::fs::WindowsAclFileAttributeView : public jni::object_base<"sun/nio/fs/WindowsAclFileAttributeView",
	sun::nio::fs::AbstractAclFileAttributeView>
{
public:

	jni::ref<java::nio::file::attribute::UserPrincipal> getOwner() { return call_method<"getOwner", jni::ref<java::nio::file::attribute::UserPrincipal>>(); }
	jni::ref<java::util::List> getAcl() { return call_method<"getAcl", jni::ref<java::util::List>>(); }
	void setOwner(jni::ref<java::nio::file::attribute::UserPrincipal> obj) { return call_method<"setOwner", void>(obj); }
	void setAcl(jni::ref<java::util::List> acl) { return call_method<"setAcl", void>(acl); }

protected:

	WindowsAclFileAttributeView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSACLFILEATTRIBUTEVIEW