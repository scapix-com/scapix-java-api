// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/reflect/MethodAccessorImpl.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_NATIVEMETHODACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_NATIVEMETHODACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class NativeMethodAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::NativeMethodAccessorImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/NativeMethodAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::reflect::MethodAccessorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_NATIVEMETHODACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_NATIVEMETHODACCESSORIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_NATIVEMETHODACCESSORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::NativeMethodAccessorImpl : public jni::object_base<"jdk/internal/reflect/NativeMethodAccessorImpl",
	jdk::internal::reflect::MethodAccessorImpl>
{
public:

	jni::ref<java::lang::Object> invoke(jni::ref<java::lang::Object> obj, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"invoke", jni::ref<java::lang::Object>>(obj, args); }

protected:

	NativeMethodAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_NATIVEMETHODACCESSORIMPL
