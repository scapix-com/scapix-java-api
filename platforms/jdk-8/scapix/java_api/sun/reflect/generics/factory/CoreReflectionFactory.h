// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/reflect/generics/factory/GenericsFactory.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_FACTORY_COREREFLECTIONFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_FACTORY_COREREFLECTIONFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::factory { class CoreReflectionFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::factory::CoreReflectionFactory>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/factory/CoreReflectionFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::reflect::generics::factory::GenericsFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_FACTORY_COREREFLECTIONFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_FACTORY_COREREFLECTIONFACTORY)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_FACTORY_COREREFLECTIONFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/GenericDeclaration.h>
#include <scapix/java_api/java/lang/reflect/ParameterizedType.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#include <scapix/java_api/java/lang/reflect/TypeVariable.h>
#include <scapix/java_api/java/lang/reflect/WildcardType.h>
#include <scapix/java_api/sun/reflect/generics/scope/Scope.h>
#include <scapix/java_api/sun/reflect/generics/tree/FieldTypeSignature.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::factory::CoreReflectionFactory : public jni::object_base<"sun/reflect/generics/factory/CoreReflectionFactory",
	java::lang::Object,
	sun::reflect::generics::factory::GenericsFactory>
{
public:

	static jni::ref<sun::reflect::generics::factory::CoreReflectionFactory> make(jni::ref<java::lang::reflect::GenericDeclaration> p1, jni::ref<sun::reflect::generics::scope::Scope> p2) { return call_static_method<"make", jni::ref<sun::reflect::generics::factory::CoreReflectionFactory>>(p1, p2); }
	jni::ref<java::lang::reflect::TypeVariable> makeTypeVariable(jni::ref<java::lang::String> p1, jni::ref<jni::array<sun::reflect::generics::tree::FieldTypeSignature>> p2) { return call_method<"makeTypeVariable", jni::ref<java::lang::reflect::TypeVariable>>(p1, p2); }
	jni::ref<java::lang::reflect::WildcardType> makeWildcard(jni::ref<jni::array<sun::reflect::generics::tree::FieldTypeSignature>> p1, jni::ref<jni::array<sun::reflect::generics::tree::FieldTypeSignature>> p2) { return call_method<"makeWildcard", jni::ref<java::lang::reflect::WildcardType>>(p1, p2); }
	jni::ref<java::lang::reflect::ParameterizedType> makeParameterizedType(jni::ref<java::lang::reflect::Type> p1, jni::ref<jni::array<java::lang::reflect::Type>> p2, jni::ref<java::lang::reflect::Type> p3) { return call_method<"makeParameterizedType", jni::ref<java::lang::reflect::ParameterizedType>>(p1, p2, p3); }
	jni::ref<java::lang::reflect::TypeVariable> findTypeVariable(jni::ref<java::lang::String> p1) { return call_method<"findTypeVariable", jni::ref<java::lang::reflect::TypeVariable>>(p1); }
	jni::ref<java::lang::reflect::Type> makeNamedType(jni::ref<java::lang::String> p1) { return call_method<"makeNamedType", jni::ref<java::lang::reflect::Type>>(p1); }
	jni::ref<java::lang::reflect::Type> makeArrayType(jni::ref<java::lang::reflect::Type> p1) { return call_method<"makeArrayType", jni::ref<java::lang::reflect::Type>>(p1); }
	jni::ref<java::lang::reflect::Type> makeByte() { return call_method<"makeByte", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::reflect::Type> makeBool() { return call_method<"makeBool", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::reflect::Type> makeShort() { return call_method<"makeShort", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::reflect::Type> makeChar() { return call_method<"makeChar", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::reflect::Type> makeInt() { return call_method<"makeInt", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::reflect::Type> makeLong() { return call_method<"makeLong", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::reflect::Type> makeFloat() { return call_method<"makeFloat", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::reflect::Type> makeDouble() { return call_method<"makeDouble", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::reflect::Type> makeVoid() { return call_method<"makeVoid", jni::ref<java::lang::reflect::Type>>(); }

protected:

	CoreReflectionFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_FACTORY_COREREFLECTIONFACTORY