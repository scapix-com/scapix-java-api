// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY_GETREFLECTIONFACTORYACTION_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY_GETREFLECTIONFACTORYACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class ReflectionFactory_GetReflectionFactoryAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::ReflectionFactory_GetReflectionFactoryAction>
{
	static constexpr fixed_string class_name = "sun/reflect/ReflectionFactory$GetReflectionFactoryAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivilegedAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY_GETREFLECTIONFACTORYACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY_GETREFLECTIONFACTORYACTION)
#define SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY_GETREFLECTIONFACTORYACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/reflect/ReflectionFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::ReflectionFactory_GetReflectionFactoryAction : public jni::object_base<"sun/reflect/ReflectionFactory$GetReflectionFactoryAction",
	java::lang::Object,
	java::security::PrivilegedAction>
{
public:

	static jni::ref<sun::reflect::ReflectionFactory_GetReflectionFactoryAction> new_object() { return base_::new_object(); }
	jni::ref<sun::reflect::ReflectionFactory> run() { return call_method<"run", jni::ref<sun::reflect::ReflectionFactory>>(); }

protected:

	ReflectionFactory_GetReflectionFactoryAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_REFLECTIONFACTORY_GETREFLECTIONFACTORYACTION