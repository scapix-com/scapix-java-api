// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/GenericArrayType.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_GENERICARRAYTYPEIMPL_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_GENERICARRAYTYPEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::reflectiveObjects { class GenericArrayTypeImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::reflectiveObjects::GenericArrayTypeImpl>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/reflectiveObjects/GenericArrayTypeImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::reflect::GenericArrayType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_GENERICARRAYTYPEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_GENERICARRAYTYPEIMPL)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_GENERICARRAYTYPEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::reflectiveObjects::GenericArrayTypeImpl : public jni::object_base<"sun/reflect/generics/reflectiveObjects/GenericArrayTypeImpl",
	java::lang::Object,
	java::lang::reflect::GenericArrayType>
{
public:

	static jni::ref<sun::reflect::generics::reflectiveObjects::GenericArrayTypeImpl> make(jni::ref<java::lang::reflect::Type> ct) { return call_static_method<"make", jni::ref<sun::reflect::generics::reflectiveObjects::GenericArrayTypeImpl>>(ct); }
	jni::ref<java::lang::reflect::Type> getGenericComponentType() { return call_method<"getGenericComponentType", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	GenericArrayTypeImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_GENERICARRAYTYPEIMPL