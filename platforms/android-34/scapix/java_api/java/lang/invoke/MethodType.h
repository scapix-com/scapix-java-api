// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/invoke/TypeDescriptor_OfMethod.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodType>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::invoke::TypeDescriptor_OfMethod, scapix::java_api::java::io::Serializable>;
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
	java::lang::invoke::TypeDescriptor_OfMethod,
	java::io::Serializable>
{
public:

	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> rtype, jni::ref<jni::array<java::lang::Class>> ptypes) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(rtype, ptypes); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> rtype, jni::ref<java::util::List> ptypes) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(rtype, ptypes); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> rtype, jni::ref<java::lang::Class> ptype0, jni::ref<jni::array<java::lang::Class>> ptypes) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(rtype, ptype0, ptypes); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> rtype) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(rtype); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> rtype, jni::ref<java::lang::Class> ptype0) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(rtype, ptype0); }
	static jni::ref<java::lang::invoke::MethodType> methodType(jni::ref<java::lang::Class> rtype, jni::ref<java::lang::invoke::MethodType> ptypes) { return call_static_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(rtype, ptypes); }
	static jni::ref<java::lang::invoke::MethodType> genericMethodType(jint objectArgCount, jboolean finalArray) { return call_static_method<"genericMethodType", jni::ref<java::lang::invoke::MethodType>>(objectArgCount, finalArray); }
	static jni::ref<java::lang::invoke::MethodType> genericMethodType(jint objectArgCount) { return call_static_method<"genericMethodType", jni::ref<java::lang::invoke::MethodType>>(objectArgCount); }
	jni::ref<java::lang::invoke::MethodType> changeParameterType(jint num, jni::ref<java::lang::Class> nptype) { return call_method<"changeParameterType", jni::ref<java::lang::invoke::MethodType>>(num, nptype); }
	jni::ref<java::lang::invoke::MethodType> insertParameterTypes(jint num, jni::ref<jni::array<java::lang::Class>> ptypesToInsert) { return call_method<"insertParameterTypes", jni::ref<java::lang::invoke::MethodType>>(num, ptypesToInsert); }
	jni::ref<java::lang::invoke::MethodType> appendParameterTypes(jni::ref<jni::array<java::lang::Class>> ptypesToInsert) { return call_method<"appendParameterTypes", jni::ref<java::lang::invoke::MethodType>>(ptypesToInsert); }
	jni::ref<java::lang::invoke::MethodType> insertParameterTypes(jint num, jni::ref<java::util::List> ptypesToInsert) { return call_method<"insertParameterTypes", jni::ref<java::lang::invoke::MethodType>>(num, ptypesToInsert); }
	jni::ref<java::lang::invoke::MethodType> appendParameterTypes(jni::ref<java::util::List> ptypesToInsert) { return call_method<"appendParameterTypes", jni::ref<java::lang::invoke::MethodType>>(ptypesToInsert); }
	jni::ref<java::lang::invoke::MethodType> dropParameterTypes(jint start, jint end) { return call_method<"dropParameterTypes", jni::ref<java::lang::invoke::MethodType>>(start, end); }
	jni::ref<java::lang::invoke::MethodType> changeReturnType(jni::ref<java::lang::Class> nrtype) { return call_method<"changeReturnType", jni::ref<java::lang::invoke::MethodType>>(nrtype); }
	jboolean hasPrimitives() { return call_method<"hasPrimitives", jboolean>(); }
	jboolean hasWrappers() { return call_method<"hasWrappers", jboolean>(); }
	jni::ref<java::lang::invoke::MethodType> erase() { return call_method<"erase", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::invoke::MethodType> generic() { return call_method<"generic", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::invoke::MethodType> wrap() { return call_method<"wrap", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::invoke::MethodType> unwrap() { return call_method<"unwrap", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::Class> parameterType(jint num) { return call_method<"parameterType", jni::ref<java::lang::Class>>(num); }
	jint parameterCount() { return call_method<"parameterCount", jint>(); }
	jni::ref<java::lang::Class> returnType() { return call_method<"returnType", jni::ref<java::lang::Class>>(); }
	jni::ref<java::util::List> parameterList() { return call_method<"parameterList", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::Class> lastParameterType() { return call_method<"lastParameterType", jni::ref<java::lang::Class>>(); }
	jni::ref<jni::array<java::lang::Class>> parameterArray() { return call_method<"parameterArray", jni::ref<jni::array<java::lang::Class>>>(); }
	jboolean equals(jni::ref<java::lang::Object> x) { return call_method<"equals", jboolean>(x); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::invoke::MethodType> fromMethodDescriptorString(jni::ref<java::lang::String> descriptor, jni::ref<java::lang::ClassLoader> loader) { return call_static_method<"fromMethodDescriptorString", jni::ref<java::lang::invoke::MethodType>>(descriptor, loader); }
	jni::ref<java::lang::String> toMethodDescriptorString() { return call_method<"toMethodDescriptorString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> descriptorString() { return call_method<"descriptorString", jni::ref<java::lang::String>>(); }

protected:

	MethodType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODTYPE
