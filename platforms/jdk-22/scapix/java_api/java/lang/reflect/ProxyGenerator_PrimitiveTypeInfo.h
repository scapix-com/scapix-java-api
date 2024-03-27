// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PRIMITIVETYPEINFO_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PRIMITIVETYPEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class ProxyGenerator_PrimitiveTypeInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>
{
	static constexpr fixed_string class_name = "java/lang/reflect/ProxyGenerator$PrimitiveTypeInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PRIMITIVETYPEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PRIMITIVETYPEINFO)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PRIMITIVETYPEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo : public jni::object_base<"java/lang/reflect/ProxyGenerator$PrimitiveTypeInfo",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> BYTE() { return get_static_field<"BYTE", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(); }
	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> CHAR() { return get_static_field<"CHAR", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(); }
	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> DOUBLE() { return get_static_field<"DOUBLE", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(); }
	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> FLOAT() { return get_static_field<"FLOAT", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(); }
	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> INT() { return get_static_field<"INT", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(); }
	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> LONG() { return get_static_field<"LONG", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(); }
	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> SHORT() { return get_static_field<"SHORT", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(); }
	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> BOOLEAN() { return get_static_field<"BOOLEAN", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(); }

	static jni::ref<jni::array<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>>(); }
	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(name); }
	static jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo> get(jni::ref<java::lang::Class> cl) { return call_static_method<"get", jni::ref<java::lang::reflect::ProxyGenerator_PrimitiveTypeInfo>>(cl); }

protected:

	ProxyGenerator_PrimitiveTypeInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXYGENERATOR_PRIMITIVETYPEINFO
