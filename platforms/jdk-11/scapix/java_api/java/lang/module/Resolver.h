// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MODULE_RESOLVER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_RESOLVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::module { class Resolver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::module::Resolver>
{
	static constexpr fixed_string class_name = "java/lang/module/Resolver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_RESOLVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MODULE_RESOLVER)
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_RESOLVER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::module::Resolver : public jni::object_base<"java/lang/module/Resolver",
	java::lang::Object>
{
public:


protected:

	Resolver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_RESOLVER
