// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CALLERSENSITIVE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CALLERSENSITIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class CallerSensitive; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::CallerSensitive>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/CallerSensitive";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CALLERSENSITIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CALLERSENSITIVE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CALLERSENSITIVE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::reflect::CallerSensitive : public jni::object_base<"jdk/internal/reflect/CallerSensitive",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	CallerSensitive(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CALLERSENSITIVE