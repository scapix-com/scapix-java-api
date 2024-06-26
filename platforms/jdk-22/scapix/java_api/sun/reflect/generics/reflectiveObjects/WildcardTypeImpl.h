// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/reflect/generics/reflectiveObjects/LazyReflectiveObjectGenerator.h>
#include <scapix/java_api/java/lang/reflect/WildcardType.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_WILDCARDTYPEIMPL_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_WILDCARDTYPEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::reflectiveObjects { class WildcardTypeImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::reflectiveObjects::WildcardTypeImpl>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/reflectiveObjects/WildcardTypeImpl";
	using base_classes = std::tuple<scapix::java_api::sun::reflect::generics::reflectiveObjects::LazyReflectiveObjectGenerator, scapix::java_api::java::lang::reflect::WildcardType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_WILDCARDTYPEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_WILDCARDTYPEIMPL)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_WILDCARDTYPEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#include <scapix/java_api/sun/reflect/generics/factory/GenericsFactory.h>
#include <scapix/java_api/sun/reflect/generics/tree/FieldTypeSignature.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::reflectiveObjects::WildcardTypeImpl : public jni::object_base<"sun/reflect/generics/reflectiveObjects/WildcardTypeImpl",
	sun::reflect::generics::reflectiveObjects::LazyReflectiveObjectGenerator,
	java::lang::reflect::WildcardType>
{
public:

	static jni::ref<sun::reflect::generics::reflectiveObjects::WildcardTypeImpl> make(jni::ref<jni::array<sun::reflect::generics::tree::FieldTypeSignature>> ubs, jni::ref<jni::array<sun::reflect::generics::tree::FieldTypeSignature>> lbs, jni::ref<sun::reflect::generics::factory::GenericsFactory> f) { return call_static_method<"make", jni::ref<sun::reflect::generics::reflectiveObjects::WildcardTypeImpl>>(ubs, lbs, f); }
	jni::ref<jni::array<java::lang::reflect::Type>> getUpperBounds() { return call_method<"getUpperBounds", jni::ref<jni::array<java::lang::reflect::Type>>>(); }
	jni::ref<jni::array<java::lang::reflect::Type>> getLowerBounds() { return call_method<"getLowerBounds", jni::ref<jni::array<java::lang::reflect::Type>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	WildcardTypeImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REFLECTIVEOBJECTS_WILDCARDTYPEIMPL
