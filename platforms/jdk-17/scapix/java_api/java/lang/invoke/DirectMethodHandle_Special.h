// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/DirectMethodHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE_SPECIAL_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE_SPECIAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class DirectMethodHandle_Special; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::DirectMethodHandle_Special>
{
	static constexpr fixed_string class_name = "java/lang/invoke/DirectMethodHandle$Special";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::DirectMethodHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE_SPECIAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE_SPECIAL)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE_SPECIAL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::DirectMethodHandle_Special : public jni::object_base<"java/lang/invoke/DirectMethodHandle$Special",
	java::lang::invoke::DirectMethodHandle>
{
public:


protected:

	DirectMethodHandle_Special(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE_SPECIAL
