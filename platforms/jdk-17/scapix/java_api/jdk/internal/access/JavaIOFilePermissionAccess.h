// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOFILEPERMISSIONACCESS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOFILEPERMISSIONACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access { class JavaIOFilePermissionAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::JavaIOFilePermissionAccess>
{
	static constexpr fixed_string class_name = "jdk/internal/access/JavaIOFilePermissionAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOFILEPERMISSIONACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOFILEPERMISSIONACCESS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOFILEPERMISSIONACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FilePermission.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::JavaIOFilePermissionAccess : public jni::object_base<"jdk/internal/access/JavaIOFilePermissionAccess",
	java::lang::Object>
{
public:

	jni::ref<java::io::FilePermission> newPermPlusAltPath(jni::ref<java::io::FilePermission> p1) { return call_method<"newPermPlusAltPath", jni::ref<java::io::FilePermission>>(p1); }
	jni::ref<java::io::FilePermission> newPermUsingAltPath(jni::ref<java::io::FilePermission> p1) { return call_method<"newPermUsingAltPath", jni::ref<java::io::FilePermission>>(p1); }

protected:

	JavaIOFilePermissionAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAIOFILEPERMISSIONACCESS
