// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodType>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::invoke::MethodType : public jni::object_base<"java/lang/invoke/MethodType",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> p1, jni::ref<jni::array<java::lang::Class>> p2) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> p1, jni::ref<java::util::List> p2) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> p1, jni::ref<java::lang::Class> p2, jni::ref<jni::array<java::lang::Class>> p3) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(p1, p2, p3); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> p1) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(p1); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> p1, jni::ref<java::lang::Class> p2) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> p1, jni::ref<java::lang::invoke::MethodType> p2) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	static jni::ref<java::lang::invoke::MethodType> genericMethodType(jint p1, jboolean p2) { return call_static_method<"genericMethodType", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	static jni::ref<java::lang::invoke::MethodType> genericMethodType(jint p1) { return call_static_method<"genericMethodType", jni::ref<java::lang::invoke::MethodType>>(p1); }
	jni::ref<java::lang::invoke::MethodType> changeParameterType(jint p1, jni::ref<java::lang::Class> p2) { return call_method<"changeParameterType", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	jni::ref<java::lang::invoke::MethodType> insertParameterTypes(jint p1, jni::ref<jni::array<java::lang::Class>> p2) { return call_method<"insertParameterTypes", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	jni::ref<java::lang::invoke::MethodType> appendParameterTypes(jni::ref<jni::array<java::lang::Class>> p1) { return call_method<"appendParameterTypes", jni::ref<java::lang::invoke::MethodType>>(p1); }
	jni::ref<java::lang::invoke::MethodType> insertParameterTypes(jint p1, jni::ref<java::util::List> p2) { return call_method<"insertParameterTypes", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	jni::ref<java::lang::invoke::MethodType> appendParameterTypes(jni::ref<java::util::List> p1) { return call_method<"appendParameterTypes", jni::ref<java::lang::invoke::MethodType>>(p1); }
	jni::ref<java::lang::invoke::MethodType> dropParameterTypes(jint p1, jint p2) { return call_method<"dropParameterTypes", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	jni::ref<java::lang::invoke::MethodType> changeReturnType(jni::ref<java::lang::Class> p1) { return call_method<"changeReturnType", jni::ref<java::lang::invoke::MethodType>>(p1); }
	jboolean hasPrimitives() { return call_method<"hasPrimitives", jboolean>(); }
	jboolean hasWrappers() { return call_method<"hasWrappers", jboolean>(); }
	jni::ref<java::lang::invoke::MethodType> erase() { return call_method<"erase", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::invoke::MethodType> generic() { return call_method<"generic", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::invoke::MethodType> wrap() { return call_method<"wrap", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::invoke::MethodType> unwrap() { return call_method<"unwrap", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::Class> parameterType(jint p1) { return call_method<"parameterType", jni::ref<java::lang::Class>>(p1); }
	jint parameterCount() { return call_method<"parameterCount", jint>(); }
	jni::ref<java::lang::Class> returnType() { return call_method<"returnType", jni::ref<java::lang::Class>>(); }
	jni::ref<java::util::List> parameterList() { return call_method<"parameterList", jni::ref<java::util::List>>(); }
	jni::ref<jni::array<java::lang::Class>> parameterArray() { return call_method<"parameterArray", jni::ref<jni::array<java::lang::Class>>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::invoke::MethodType> fromMethodDescriptorString(jni::ref<java::lang::String> p1, jni::ref<java::lang::ClassLoader> p2) { return call_static_method<"fromMethodDescriptorString", jni::ref<java::lang::invoke::MethodType>>(p1, p2); }
	jni::ref<java::lang::String> toMethodDescriptorString() { return call_method<"toMethodDescriptorString", jni::ref<java::lang::String>>(); }

protected:

	MethodType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPE
