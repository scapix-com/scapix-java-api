// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/reflect/UnsafeFieldAccessorImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_UNSAFEQUALIFIEDFIELDACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_UNSAFEQUALIFIEDFIELDACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class UnsafeQualifiedFieldAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::UnsafeQualifiedFieldAccessorImpl>
{
	static constexpr fixed_string class_name = "sun/reflect/UnsafeQualifiedFieldAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::sun::reflect::UnsafeFieldAccessorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_UNSAFEQUALIFIEDFIELDACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_UNSAFEQUALIFIEDFIELDACCESSORIMPL)
#define SCAPIX_JAVA_API_SUN_REFLECT_UNSAFEQUALIFIEDFIELDACCESSORIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::UnsafeQualifiedFieldAccessorImpl : public jni::object_base<"sun/reflect/UnsafeQualifiedFieldAccessorImpl",
	sun::reflect::UnsafeFieldAccessorImpl>
{
public:


protected:

	UnsafeQualifiedFieldAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_UNSAFEQUALIFIEDFIELDACCESSORIMPL
