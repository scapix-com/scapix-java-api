// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_AWTPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_AWTPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class AWTPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::AWTPermission>
{
	static constexpr fixed_string class_name = "java/awt/AWTPermission";
	using base_classes = std::tuple<scapix::java_api::java::security::BasicPermission>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_AWTPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_AWTPERMISSION)
#define SCAPIX_JAVA_API_JAVA_AWT_AWTPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::AWTPermission : public jni::object_base<"java/awt/AWTPermission",
	java::security::BasicPermission>
{
public:

	static jni::ref<java::awt::AWTPermission> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::AWTPermission> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }

protected:

	AWTPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_AWTPERMISSION