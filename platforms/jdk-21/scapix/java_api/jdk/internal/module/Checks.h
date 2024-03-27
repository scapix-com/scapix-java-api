// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CHECKS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CHECKS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class Checks; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::Checks>
{
	static constexpr fixed_string class_name = "jdk/internal/module/Checks";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CHECKS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CHECKS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CHECKS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::module::Checks : public jni::object_base<"jdk/internal/module/Checks",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> requireModuleName(jni::ref<java::lang::String> name) { return call_static_method<"requireModuleName", jni::ref<java::lang::String>>(name); }
	static jni::ref<java::lang::String> requirePackageName(jni::ref<java::lang::String> name) { return call_static_method<"requirePackageName", jni::ref<java::lang::String>>(name); }
	static jboolean isPackageName(jni::ref<java::lang::String> name) { return call_static_method<"isPackageName", jboolean>(name); }
	static jni::ref<java::lang::String> requireServiceTypeName(jni::ref<java::lang::String> name) { return call_static_method<"requireServiceTypeName", jni::ref<java::lang::String>>(name); }
	static jni::ref<java::lang::String> requireServiceProviderName(jni::ref<java::lang::String> name) { return call_static_method<"requireServiceProviderName", jni::ref<java::lang::String>>(name); }
	static jni::ref<java::lang::String> requireQualifiedClassName(jni::ref<java::lang::String> what, jni::ref<java::lang::String> name) { return call_static_method<"requireQualifiedClassName", jni::ref<java::lang::String>>(what, name); }
	static jboolean isClassName(jni::ref<java::lang::String> name) { return call_static_method<"isClassName", jboolean>(name); }
	static jboolean isJavaIdentifier(jni::ref<java::lang::String> str) { return call_static_method<"isJavaIdentifier", jboolean>(str); }

protected:

	Checks(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_CHECKS
