// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYBASE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleByteArrayBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleByteArrayBase>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleByteArrayBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYBASE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYBASE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleByteArrayBase : public jni::object_base<"java/lang/invoke/VarHandleByteArrayBase",
	java::lang::Object>
{
public:


protected:

	VarHandleByteArrayBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYBASE
