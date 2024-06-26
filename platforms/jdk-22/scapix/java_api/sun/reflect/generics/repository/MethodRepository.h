// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/reflect/generics/repository/ConstructorRepository.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REPOSITORY_METHODREPOSITORY_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REPOSITORY_METHODREPOSITORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::repository { class MethodRepository; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::repository::MethodRepository>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/repository/MethodRepository";
	using base_classes = std::tuple<scapix::java_api::sun::reflect::generics::repository::ConstructorRepository>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REPOSITORY_METHODREPOSITORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REPOSITORY_METHODREPOSITORY)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REPOSITORY_METHODREPOSITORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#include <scapix/java_api/sun/reflect/generics/factory/GenericsFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::repository::MethodRepository : public jni::object_base<"sun/reflect/generics/repository/MethodRepository",
	sun::reflect::generics::repository::ConstructorRepository>
{
public:

	static jni::ref<sun::reflect::generics::repository::MethodRepository> make(jni::ref<java::lang::String> rawSig, jni::ref<sun::reflect::generics::factory::GenericsFactory> f) { return call_static_method<"make", jni::ref<sun::reflect::generics::repository::MethodRepository>>(rawSig, f); }
	jni::ref<java::lang::reflect::Type> getReturnType() { return call_method<"getReturnType", jni::ref<java::lang::reflect::Type>>(); }

protected:

	MethodRepository(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_REPOSITORY_METHODREPOSITORY
