// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleBytes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleBytes>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleBytes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleBytes : public jni::object_base<"java/lang/invoke/VarHandleBytes",
	java::lang::Object>
{
public:


protected:

	VarHandleBytes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES
