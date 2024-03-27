// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROPERTIES_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROPERTIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class SecurityProperties; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::SecurityProperties>
{
	static constexpr fixed_string class_name = "sun/security/util/SecurityProperties";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROPERTIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROPERTIES)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROPERTIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::SecurityProperties : public jni::object_base<"sun/security/util/SecurityProperties",
	java::lang::Object>
{
public:

	static jboolean INCLUDE_JAR_NAME_IN_EXCEPTIONS() { return get_static_field<"INCLUDE_JAR_NAME_IN_EXCEPTIONS", jboolean>(); }

	static jni::ref<sun::security::util::SecurityProperties> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> privilegedGetOverridable(jni::ref<java::lang::String> propName) { return call_static_method<"privilegedGetOverridable", jni::ref<java::lang::String>>(propName); }
	static jboolean includedInExceptions(jni::ref<java::lang::String> refName) { return call_static_method<"includedInExceptions", jboolean>(refName); }

protected:

	SecurityProperties(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROPERTIES