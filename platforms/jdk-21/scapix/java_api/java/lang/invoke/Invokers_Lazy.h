// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERS_LAZY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERS_LAZY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class Invokers_Lazy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::Invokers_Lazy>
{
	static constexpr fixed_string class_name = "java/lang/invoke/Invokers$Lazy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERS_LAZY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERS_LAZY)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERS_LAZY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::Invokers_Lazy : public jni::object_base<"java/lang/invoke/Invokers$Lazy",
	java::lang::Object>
{
public:


protected:

	Invokers_Lazy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERS_LAZY