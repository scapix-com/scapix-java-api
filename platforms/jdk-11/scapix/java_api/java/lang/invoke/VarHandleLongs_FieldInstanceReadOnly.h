// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADONLY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADONLY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleLongs_FieldInstanceReadOnly; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleLongs_FieldInstanceReadOnly>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleLongs$FieldInstanceReadOnly";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADONLY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADONLY)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADONLY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleLongs_FieldInstanceReadOnly : public jni::object_base<"java/lang/invoke/VarHandleLongs$FieldInstanceReadOnly",
	java::lang::invoke::VarHandle>
{
public:


protected:

	VarHandleLongs_FieldInstanceReadOnly(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADONLY
