// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DELEGATINGMETHODHANDLE_HOLDER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DELEGATINGMETHODHANDLE_HOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class DelegatingMethodHandle_Holder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::DelegatingMethodHandle_Holder>
{
	static constexpr fixed_string class_name = "java/lang/invoke/DelegatingMethodHandle$Holder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DELEGATINGMETHODHANDLE_HOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DELEGATINGMETHODHANDLE_HOLDER)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DELEGATINGMETHODHANDLE_HOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::DelegatingMethodHandle_Holder : public jni::object_base<"java/lang/invoke/DelegatingMethodHandle$Holder",
	java::lang::Object>
{
public:


protected:

	DelegatingMethodHandle_Holder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DELEGATINGMETHODHANDLE_HOLDER