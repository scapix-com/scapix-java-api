// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_GENERATEJLICLASSESHELPER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_GENERATEJLICLASSESHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class GenerateJLIClassesHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::GenerateJLIClassesHelper>
{
	static constexpr fixed_string class_name = "java/lang/invoke/GenerateJLIClassesHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_GENERATEJLICLASSESHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_GENERATEJLICLASSESHELPER)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_GENERATEJLICLASSESHELPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::GenerateJLIClassesHelper : public jni::object_base<"java/lang/invoke/GenerateJLIClassesHelper",
	java::lang::Object>
{
public:


protected:

	GenerateJLIClassesHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_GENERATEJLICLASSESHELPER