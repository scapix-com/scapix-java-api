// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADONLY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADONLY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleDoubles_FieldStaticReadOnly; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleDoubles_FieldStaticReadOnly>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleDoubles$FieldStaticReadOnly";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADONLY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADONLY)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADONLY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleDoubles_FieldStaticReadOnly : public jni::object_base<"java/lang/invoke/VarHandleDoubles$FieldStaticReadOnly",
	java::lang::invoke::VarHandle>
{
public:


protected:

	VarHandleDoubles_FieldStaticReadOnly(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADONLY
