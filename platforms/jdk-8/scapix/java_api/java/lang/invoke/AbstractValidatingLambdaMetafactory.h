// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTVALIDATINGLAMBDAMETAFACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTVALIDATINGLAMBDAMETAFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class AbstractValidatingLambdaMetafactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::AbstractValidatingLambdaMetafactory>
{
	static constexpr fixed_string class_name = "java/lang/invoke/AbstractValidatingLambdaMetafactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTVALIDATINGLAMBDAMETAFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTVALIDATINGLAMBDAMETAFACTORY)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTVALIDATINGLAMBDAMETAFACTORY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::AbstractValidatingLambdaMetafactory : public jni::object_base<"java/lang/invoke/AbstractValidatingLambdaMetafactory",
	java::lang::Object>
{
public:


protected:

	AbstractValidatingLambdaMetafactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTVALIDATINGLAMBDAMETAFACTORY
