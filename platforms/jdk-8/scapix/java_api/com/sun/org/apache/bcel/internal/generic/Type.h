// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_TYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_TYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class Type; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::Type>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/Type";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_TYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_TYPE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_TYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::Type : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/Type",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> VOID() { return get_static_field<"VOID", jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> BOOLEAN() { return get_static_field<"BOOLEAN", jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> INT() { return get_static_field<"INT", jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> SHORT() { return get_static_field<"SHORT", jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> BYTE() { return get_static_field<"BYTE", jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> LONG() { return get_static_field<"LONG", jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> DOUBLE() { return get_static_field<"DOUBLE", jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> FLOAT() { return get_static_field<"FLOAT", jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> CHAR() { return get_static_field<"CHAR", jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> OBJECT() { return get_static_field<"OBJECT", jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> CLASS() { return get_static_field<"CLASS", jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> STRING() { return get_static_field<"STRING", jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> STRINGBUFFER() { return get_static_field<"STRINGBUFFER", jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> THROWABLE() { return get_static_field<"THROWABLE", jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType>>(); }
	static jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::Type>> NO_ARGS() { return get_static_field<"NO_ARGS", jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::Type>>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ReferenceType> NULL() { return get_static_field<"NULL", jni::ref<com::sun::org::apache::bcel::internal::generic::ReferenceType>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Type> UNKNOWN() { return get_static_field<"UNKNOWN", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(); }

	static jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::Type>> getArgumentTypes(jni::ref<java::lang::String> p1) { return call_static_method<"getArgumentTypes", jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::Type>>>(p1); }
	static jni::ref<java::lang::String> getMethodSignature(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1, jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::Type>> p2) { return call_static_method<"getMethodSignature", jni::ref<java::lang::String>>(p1, p2); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Type> getReturnType(jni::ref<java::lang::String> p1) { return call_static_method<"getReturnType", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(p1); }
	static jni::ref<java::lang::String> getSignature(jni::ref<java::lang::reflect::Method> p1) { return call_static_method<"getSignature", jni::ref<java::lang::String>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Type> getType(jni::ref<java::lang::Class> p1) { return call_static_method<"getType", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Type> getType(jni::ref<java::lang::String> p1) { return call_static_method<"getType", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(p1); }
	static jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::Type>> getTypes(jni::ref<jni::array<java::lang::Class>> p1) { return call_static_method<"getTypes", jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::Type>>>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSignature() { return call_method<"getSignature", jni::ref<java::lang::String>>(); }
	jint getSize() { return call_method<"getSize", jint>(); }
	jbyte getType() { return call_method<"getType", jbyte>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Type> normalizeForStackOrLocal() { return call_method<"normalizeForStackOrLocal", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Type(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_TYPE
