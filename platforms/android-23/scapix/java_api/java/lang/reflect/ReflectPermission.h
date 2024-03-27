// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_REFLECTPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_REFLECTPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class ReflectPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::ReflectPermission>
{
	static constexpr fixed_string class_name = "java/lang/reflect/ReflectPermission";
	using base_classes = std::tuple<scapix::java_api::java::security::BasicPermission>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_REFLECTPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_REFLECTPERMISSION)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_REFLECTPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Permission.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::ReflectPermission : public jni::object_base<"java/lang/reflect/ReflectPermission",
	java::security::BasicPermission>
{
public:

	static jni::ref<java::lang::reflect::ReflectPermission> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<java::lang::reflect::ReflectPermission> new_object(jni::ref<java::lang::String> name, jni::ref<java::lang::String> actions) { return base_::new_object(name, actions); }
	jni::ref<java::lang::String> getActions() { return call_method<"getActions", jni::ref<java::lang::String>>(); }
	jboolean implies(jni::ref<java::security::Permission> permission) { return call_method<"implies", jboolean>(permission); }

protected:

	ReflectPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_REFLECTPERMISSION
