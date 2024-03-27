// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/fs/WindowsUserPrincipals_User.h>
#include <scapix/java_api/java/nio/file/attribute/GroupPrincipal.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_GROUP_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_GROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class WindowsUserPrincipals_Group; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::WindowsUserPrincipals_Group>
{
	static constexpr fixed_string class_name = "sun/nio/fs/WindowsUserPrincipals$Group";
	using base_classes = std::tuple<scapix::java_api::sun::nio::fs::WindowsUserPrincipals_User, scapix::java_api::java::nio::file::attribute::GroupPrincipal>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_GROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_GROUP)
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_GROUP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::fs::WindowsUserPrincipals_Group : public jni::object_base<"sun/nio/fs/WindowsUserPrincipals$Group",
	sun::nio::fs::WindowsUserPrincipals_User,
	java::nio::file::attribute::GroupPrincipal>
{
public:


protected:

	WindowsUserPrincipals_Group(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_GROUP
