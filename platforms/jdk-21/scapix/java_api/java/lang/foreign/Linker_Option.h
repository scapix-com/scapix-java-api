// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_LINKER_OPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_LINKER_OPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign { class Linker_Option; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::Linker_Option>
{
	static constexpr fixed_string class_name = "java/lang/foreign/Linker$Option";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_LINKER_OPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_LINKER_OPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_LINKER_OPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/StructLayout.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::foreign::Linker_Option : public jni::object_base<"java/lang/foreign/Linker$Option",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::foreign::Linker_Option> firstVariadicArg(jint index) { return call_static_method<"firstVariadicArg", jni::ref<java::lang::foreign::Linker_Option>>(index); }
	static jni::ref<java::lang::foreign::Linker_Option> captureCallState(jni::ref<jni::array<java::lang::String>> capturedState) { return call_static_method<"captureCallState", jni::ref<java::lang::foreign::Linker_Option>>(capturedState); }
	static jni::ref<java::lang::foreign::StructLayout> captureStateLayout() { return call_static_method<"captureStateLayout", jni::ref<java::lang::foreign::StructLayout>>(); }
	static jni::ref<java::lang::foreign::Linker_Option> isTrivial() { return call_static_method<"isTrivial", jni::ref<java::lang::foreign::Linker_Option>>(); }

protected:

	Linker_Option(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_LINKER_OPTION
