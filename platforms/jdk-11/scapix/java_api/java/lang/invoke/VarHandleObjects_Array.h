// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEOBJECTS_ARRAY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEOBJECTS_ARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleObjects_Array; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleObjects_Array>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleObjects$Array";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEOBJECTS_ARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEOBJECTS_ARRAY)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEOBJECTS_ARRAY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleObjects_Array : public jni::object_base<"java/lang/invoke/VarHandleObjects$Array",
	java::lang::invoke::VarHandle>
{
public:


protected:

	VarHandleObjects_Array(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEOBJECTS_ARRAY