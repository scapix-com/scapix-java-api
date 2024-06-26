// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/reflect/MagicAccessorImpl.h>
#include <scapix/java_api/jdk/internal/reflect/ConstructorAccessor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class ConstructorAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::ConstructorAccessorImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/ConstructorAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::reflect::MagicAccessorImpl, scapix::java_api::jdk::internal::reflect::ConstructorAccessor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSORIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::ConstructorAccessorImpl : public jni::object_base<"jdk/internal/reflect/ConstructorAccessorImpl",
	jdk::internal::reflect::MagicAccessorImpl,
	jdk::internal::reflect::ConstructorAccessor>
{
public:

	jni::ref<java::lang::Object> newInstance(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"newInstance", jni::ref<java::lang::Object>>(p1); }

protected:

	ConstructorAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CONSTRUCTORACCESSORIMPL
