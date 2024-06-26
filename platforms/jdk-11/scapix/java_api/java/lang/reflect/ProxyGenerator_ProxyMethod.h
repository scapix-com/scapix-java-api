// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PROXYMETHOD_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PROXYMETHOD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class ProxyGenerator_ProxyMethod; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::ProxyGenerator_ProxyMethod>
{
	static constexpr fixed_string class_name = "java/lang/reflect/ProxyGenerator$ProxyMethod";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PROXYMETHOD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PROXYMETHOD)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PROXYMETHOD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::reflect::ProxyGenerator_ProxyMethod : public jni::object_base<"java/lang/reflect/ProxyGenerator$ProxyMethod",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> methodName() { return get_field<"methodName", jni::ref<java::lang::String>>(); }
	void methodName(jni::ref<java::lang::String> v) { set_field<"methodName", jni::ref<java::lang::String>>(v); }
	jni::ref<jni::array<java::lang::Class>> parameterTypes() { return get_field<"parameterTypes", jni::ref<jni::array<java::lang::Class>>>(); }
	void parameterTypes(jni::ref<jni::array<java::lang::Class>> v) { set_field<"parameterTypes", jni::ref<jni::array<java::lang::Class>>>(v); }
	jni::ref<java::lang::Class> returnType() { return get_field<"returnType", jni::ref<java::lang::Class>>(); }
	void returnType(jni::ref<java::lang::Class> v) { set_field<"returnType", jni::ref<java::lang::Class>>(v); }
	jni::ref<jni::array<java::lang::Class>> exceptionTypes() { return get_field<"exceptionTypes", jni::ref<jni::array<java::lang::Class>>>(); }
	void exceptionTypes(jni::ref<jni::array<java::lang::Class>> v) { set_field<"exceptionTypes", jni::ref<jni::array<java::lang::Class>>>(v); }
	jni::ref<java::lang::Class> fromClass() { return get_field<"fromClass", jni::ref<java::lang::Class>>(); }
	void fromClass(jni::ref<java::lang::Class> v) { set_field<"fromClass", jni::ref<java::lang::Class>>(v); }
	jni::ref<java::lang::String> methodFieldName() { return get_field<"methodFieldName", jni::ref<java::lang::String>>(); }
	void methodFieldName(jni::ref<java::lang::String> v) { set_field<"methodFieldName", jni::ref<java::lang::String>>(v); }


protected:

	ProxyGenerator_ProxyMethod(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PROXYMETHOD
