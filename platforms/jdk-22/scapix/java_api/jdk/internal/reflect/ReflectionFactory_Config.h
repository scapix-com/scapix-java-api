// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_REFLECTIONFACTORY_CONFIG_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_REFLECTIONFACTORY_CONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class ReflectionFactory_Config; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::ReflectionFactory_Config>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/ReflectionFactory$Config";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_REFLECTIONFACTORY_CONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_REFLECTIONFACTORY_CONFIG)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_REFLECTIONFACTORY_CONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::ReflectionFactory_Config : public jni::object_base<"jdk/internal/reflect/ReflectionFactory$Config",
	java::lang::Record>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jboolean useNativeAccessorOnly() { return call_method<"useNativeAccessorOnly", jboolean>(); }
	jboolean useOldSerializableConstructor() { return call_method<"useOldSerializableConstructor", jboolean>(); }
	jboolean disableSerialConstructorChecks() { return call_method<"disableSerialConstructorChecks", jboolean>(); }

protected:

	ReflectionFactory_Config(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_REFLECTIONFACTORY_CONFIG
