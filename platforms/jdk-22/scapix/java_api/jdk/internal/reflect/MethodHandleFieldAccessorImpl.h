// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/reflect/FieldAccessorImpl.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODHANDLEFIELDACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODHANDLEFIELDACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class MethodHandleFieldAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::MethodHandleFieldAccessorImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/MethodHandleFieldAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::reflect::FieldAccessorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODHANDLEFIELDACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODHANDLEFIELDACCESSORIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODHANDLEFIELDACCESSORIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::MethodHandleFieldAccessorImpl : public jni::object_base<"jdk/internal/reflect/MethodHandleFieldAccessorImpl",
	jdk::internal::reflect::FieldAccessorImpl>
{
public:


protected:

	MethodHandleFieldAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODHANDLEFIELDACCESSORIMPL