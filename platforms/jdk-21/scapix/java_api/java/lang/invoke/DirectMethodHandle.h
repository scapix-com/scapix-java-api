// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/MethodHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class DirectMethodHandle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::DirectMethodHandle>
{
	static constexpr fixed_string class_name = "java/lang/invoke/DirectMethodHandle";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::MethodHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::DirectMethodHandle : public jni::object_base<"java/lang/invoke/DirectMethodHandle",
	java::lang::invoke::MethodHandle>
{
public:


protected:

	DirectMethodHandle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_DIRECTMETHODHANDLE
