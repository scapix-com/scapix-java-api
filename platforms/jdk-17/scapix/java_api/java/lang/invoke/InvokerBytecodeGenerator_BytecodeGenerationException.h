// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_BYTECODEGENERATIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_BYTECODEGENERATIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class InvokerBytecodeGenerator_BytecodeGenerationException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::InvokerBytecodeGenerator_BytecodeGenerationException>
{
	static constexpr fixed_string class_name = "java/lang/invoke/InvokerBytecodeGenerator$BytecodeGenerationException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_BYTECODEGENERATIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_BYTECODEGENERATIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_BYTECODEGENERATIONEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::InvokerBytecodeGenerator_BytecodeGenerationException : public jni::object_base<"java/lang/invoke/InvokerBytecodeGenerator$BytecodeGenerationException",
	java::lang::RuntimeException>
{
public:


protected:

	InvokerBytecodeGenerator_BytecodeGenerationException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_INVOKERBYTECODEGENERATOR_BYTECODEGENERATIONEXCEPTION
