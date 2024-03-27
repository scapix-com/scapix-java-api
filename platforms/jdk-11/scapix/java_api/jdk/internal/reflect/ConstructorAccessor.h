// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class ConstructorAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::ConstructorAccessor>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/ConstructorAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::reflect::ConstructorAccessor : public jni::object_base<"jdk/internal/reflect/ConstructorAccessor",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> newInstance(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"newInstance", jni::ref<java::lang::Object>>(p1); }

protected:

	ConstructorAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSOR
