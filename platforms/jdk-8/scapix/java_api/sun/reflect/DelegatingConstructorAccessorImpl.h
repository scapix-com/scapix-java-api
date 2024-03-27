// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/reflect/ConstructorAccessorImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_DELEGATINGCONSTRUCTORACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_DELEGATINGCONSTRUCTORACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class DelegatingConstructorAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::DelegatingConstructorAccessorImpl>
{
	static constexpr fixed_string class_name = "sun/reflect/DelegatingConstructorAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::sun::reflect::ConstructorAccessorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_DELEGATINGCONSTRUCTORACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_DELEGATINGCONSTRUCTORACCESSORIMPL)
#define SCAPIX_JAVA_API_SUN_REFLECT_DELEGATINGCONSTRUCTORACCESSORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::DelegatingConstructorAccessorImpl : public jni::object_base<"sun/reflect/DelegatingConstructorAccessorImpl",
	sun::reflect::ConstructorAccessorImpl>
{
public:

	jni::ref<java::lang::Object> newInstance(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"newInstance", jni::ref<java::lang::Object>>(p1); }

protected:

	DelegatingConstructorAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_DELEGATINGCONSTRUCTORACCESSORIMPL