// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_CLASSDATA_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_CLASSDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class InvokerBytecodeGenerator_ClassData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::InvokerBytecodeGenerator_ClassData>
{
	static constexpr fixed_string class_name = "java/lang/invoke/InvokerBytecodeGenerator$ClassData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_CLASSDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_CLASSDATA)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_CLASSDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::InvokerBytecodeGenerator_ClassData : public jni::object_base<"java/lang/invoke/InvokerBytecodeGenerator$ClassData",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	InvokerBytecodeGenerator_ClassData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_CLASSDATA