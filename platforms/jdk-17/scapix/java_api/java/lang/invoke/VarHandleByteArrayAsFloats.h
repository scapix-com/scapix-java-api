// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleByteArrayBase.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASFLOATS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASFLOATS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleByteArrayAsFloats; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleByteArrayAsFloats>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleByteArrayAsFloats";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleByteArrayBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASFLOATS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASFLOATS)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASFLOATS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleByteArrayAsFloats : public jni::object_base<"java/lang/invoke/VarHandleByteArrayAsFloats",
	java::lang::invoke::VarHandleByteArrayBase>
{
public:


protected:

	VarHandleByteArrayAsFloats(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASFLOATS
