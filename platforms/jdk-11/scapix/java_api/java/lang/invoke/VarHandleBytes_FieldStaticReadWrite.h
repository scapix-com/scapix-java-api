// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleBytes_FieldStaticReadOnly.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES_FIELDSTATICREADWRITE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES_FIELDSTATICREADWRITE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleBytes_FieldStaticReadWrite; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleBytes_FieldStaticReadWrite>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleBytes$FieldStaticReadWrite";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleBytes_FieldStaticReadOnly>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES_FIELDSTATICREADWRITE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES_FIELDSTATICREADWRITE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES_FIELDSTATICREADWRITE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleBytes_FieldStaticReadWrite : public jni::object_base<"java/lang/invoke/VarHandleBytes$FieldStaticReadWrite",
	java::lang::invoke::VarHandleBytes_FieldStaticReadOnly>
{
public:


protected:

	VarHandleBytes_FieldStaticReadWrite(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTES_FIELDSTATICREADWRITE
