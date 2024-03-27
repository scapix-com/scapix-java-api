// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_EXTENDEDOPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_EXTENDEDOPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class StackWalker_ExtendedOption; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::StackWalker_ExtendedOption>
{
	static constexpr fixed_string class_name = "java/lang/StackWalker$ExtendedOption";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_EXTENDEDOPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_EXTENDEDOPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_EXTENDEDOPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::StackWalker_ExtendedOption : public jni::object_base<"java/lang/StackWalker$ExtendedOption",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::StackWalker_ExtendedOption> LOCALS_AND_OPERANDS() { return get_static_field<"LOCALS_AND_OPERANDS", jni::ref<java::lang::StackWalker_ExtendedOption>>(); }

	static jni::ref<jni::array<java::lang::StackWalker_ExtendedOption>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::StackWalker_ExtendedOption>>>(); }
	static jni::ref<java::lang::StackWalker_ExtendedOption> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::StackWalker_ExtendedOption>>(name); }

protected:

	StackWalker_ExtendedOption(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_EXTENDEDOPTION