// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/file/attribute/UserPrincipal.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_USER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_USER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::fs { class WindowsUserPrincipals_User; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::fs::WindowsUserPrincipals_User>
{
	static constexpr fixed_string class_name = "sun/nio/fs/WindowsUserPrincipals$User";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::nio::file::attribute::UserPrincipal>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_USER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_USER)
#define SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_USER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::fs::WindowsUserPrincipals_User : public jni::object_base<"sun/nio/fs/WindowsUserPrincipals$User",
	java::lang::Object,
	java::nio::file::attribute::UserPrincipal>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	WindowsUserPrincipals_User(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_FS_WINDOWSUSERPRINCIPALS_USER