// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleLongs_FieldInstanceReadOnly.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADWRITE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADWRITE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleLongs_FieldInstanceReadWrite; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleLongs_FieldInstanceReadWrite>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleLongs$FieldInstanceReadWrite";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleLongs_FieldInstanceReadOnly>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADWRITE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADWRITE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADWRITE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleLongs_FieldInstanceReadWrite : public jni::object_base<"java/lang/invoke/VarHandleLongs$FieldInstanceReadWrite",
	java::lang::invoke::VarHandleLongs_FieldInstanceReadOnly>
{
public:


protected:

	VarHandleLongs_FieldInstanceReadWrite(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLELONGS_FIELDINSTANCEREADWRITE
