// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/reflect/MagicAccessorImpl.h>
#include <scapix/java_api/jdk/internal/reflect/MethodAccessor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class MethodAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::MethodAccessorImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/MethodAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::reflect::MagicAccessorImpl, scapix::java_api::jdk::internal::reflect::MethodAccessor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::MethodAccessorImpl : public jni::object_base<"jdk/internal/reflect/MethodAccessorImpl",
	jdk::internal::reflect::MagicAccessorImpl,
	jdk::internal::reflect::MethodAccessor>
{
public:

	jni::ref<java::lang::Object> invoke(jni::ref<java::lang::Object> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> invoke(jni::ref<java::lang::Object> obj, jni::ref<jni::array<java::lang::Object>> args, jni::ref<java::lang::Class> caller) { return call_method<"invoke", jni::ref<java::lang::Object>>(obj, args, caller); }

protected:

	MethodAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORIMPL
