// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/reflect/generics/scope/AbstractScope.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_CONSTRUCTORSCOPE_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_CONSTRUCTORSCOPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::scope { class ConstructorScope; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::scope::ConstructorScope>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/scope/ConstructorScope";
	using base_classes = std::tuple<scapix::java_api::sun::reflect::generics::scope::AbstractScope>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_CONSTRUCTORSCOPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_CONSTRUCTORSCOPE)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_CONSTRUCTORSCOPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/reflect/Constructor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::scope::ConstructorScope : public jni::object_base<"sun/reflect/generics/scope/ConstructorScope",
	sun::reflect::generics::scope::AbstractScope>
{
public:

	static jni::ref<sun::reflect::generics::scope::ConstructorScope> make(jni::ref<java::lang::reflect::Constructor> c) { return call_static_method<"make", jni::ref<sun::reflect::generics::scope::ConstructorScope>>(c); }

protected:

	ConstructorScope(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_CONSTRUCTORSCOPE
