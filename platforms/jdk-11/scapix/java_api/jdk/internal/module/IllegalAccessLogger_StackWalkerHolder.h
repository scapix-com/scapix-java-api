// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_ILLEGALACCESSLOGGER_STACKWALKERHOLDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_ILLEGALACCESSLOGGER_STACKWALKERHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class IllegalAccessLogger_StackWalkerHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::IllegalAccessLogger_StackWalkerHolder>
{
	static constexpr fixed_string class_name = "jdk/internal/module/IllegalAccessLogger$StackWalkerHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_ILLEGALACCESSLOGGER_STACKWALKERHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_ILLEGALACCESSLOGGER_STACKWALKERHOLDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_ILLEGALACCESSLOGGER_STACKWALKERHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::module::IllegalAccessLogger_StackWalkerHolder : public jni::object_base<"jdk/internal/module/IllegalAccessLogger$StackWalkerHolder",
	java::lang::Object>
{
public:


protected:

	IllegalAccessLogger_StackWalkerHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_ILLEGALACCESSLOGGER_STACKWALKERHOLDER
