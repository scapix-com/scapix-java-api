// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/reflect/UnsafeFieldAccessorImpl.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFESTATICFIELDACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFESTATICFIELDACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class UnsafeStaticFieldAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::UnsafeStaticFieldAccessorImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/UnsafeStaticFieldAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::reflect::UnsafeFieldAccessorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFESTATICFIELDACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFESTATICFIELDACCESSORIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFESTATICFIELDACCESSORIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::UnsafeStaticFieldAccessorImpl : public jni::object_base<"jdk/internal/reflect/UnsafeStaticFieldAccessorImpl",
	jdk::internal::reflect::UnsafeFieldAccessorImpl>
{
public:


protected:

	UnsafeStaticFieldAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFESTATICFIELDACCESSORIMPL
