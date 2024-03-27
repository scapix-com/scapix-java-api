// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/Permission.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_ALLPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_ALLPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class AllPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::AllPermission>
{
	static constexpr fixed_string class_name = "java/security/AllPermission";
	using base_classes = std::tuple<scapix::java_api::java::security::Permission>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ALLPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_ALLPERMISSION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_ALLPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::AllPermission : public jni::object_base<"java/security/AllPermission",
	java::security::Permission>
{
public:

	static jni::ref<java::security::AllPermission> new_object(jni::ref<java::lang::String> name, jni::ref<java::lang::String> actions) { return base_::new_object(name, actions); }
	static jni::ref<java::security::AllPermission> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getActions() { return call_method<"getActions", jni::ref<java::lang::String>>(); }
	jboolean implies(jni::ref<java::security::Permission> permission) { return call_method<"implies", jboolean>(permission); }

protected:

	AllPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ALLPERMISSION
