// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/reflect/generics/scope/Scope.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_DUMMYSCOPE_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_DUMMYSCOPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::scope { class DummyScope; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::scope::DummyScope>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/scope/DummyScope";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::reflect::generics::scope::Scope>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_DUMMYSCOPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_DUMMYSCOPE)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_DUMMYSCOPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/TypeVariable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::scope::DummyScope : public jni::object_base<"sun/reflect/generics/scope/DummyScope",
	java::lang::Object,
	sun::reflect::generics::scope::Scope>
{
public:

	static jni::ref<sun::reflect::generics::scope::DummyScope> make() { return call_static_method<"make", jni::ref<sun::reflect::generics::scope::DummyScope>>(); }
	jni::ref<java::lang::reflect::TypeVariable> lookup(jni::ref<java::lang::String> name) { return call_method<"lookup", jni::ref<java::lang::reflect::TypeVariable>>(name); }

protected:

	DummyScope(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_SCOPE_DUMMYSCOPE