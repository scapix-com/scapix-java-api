// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_RUNTIMEPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIMEPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class RuntimePermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::RuntimePermission>
{
	static constexpr fixed_string class_name = "java/lang/RuntimePermission";
	using base_classes = std::tuple<scapix::java_api::java::security::BasicPermission>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIMEPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_RUNTIMEPERMISSION)
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIMEPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::RuntimePermission : public jni::object_base<"java/lang/RuntimePermission",
	java::security::BasicPermission>
{
public:

	static jni::ref<java::lang::RuntimePermission> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<java::lang::RuntimePermission> new_object(jni::ref<java::lang::String> name, jni::ref<java::lang::String> actions) { return base_::new_object(name, actions); }

protected:

	RuntimePermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIMEPERMISSION