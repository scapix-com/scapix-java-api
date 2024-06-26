// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_OPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_OPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class StackWalker_Option; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::StackWalker_Option>
{
	static constexpr fixed_string class_name = "java/lang/StackWalker$Option";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_OPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_OPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_OPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::StackWalker_Option : public jni::object_base<"java/lang/StackWalker$Option",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::StackWalker_Option> RETAIN_CLASS_REFERENCE() { return get_static_field<"RETAIN_CLASS_REFERENCE", jni::ref<java::lang::StackWalker_Option>>(); }
	static jni::ref<java::lang::StackWalker_Option> DROP_METHOD_INFO() { return get_static_field<"DROP_METHOD_INFO", jni::ref<java::lang::StackWalker_Option>>(); }
	static jni::ref<java::lang::StackWalker_Option> SHOW_REFLECT_FRAMES() { return get_static_field<"SHOW_REFLECT_FRAMES", jni::ref<java::lang::StackWalker_Option>>(); }
	static jni::ref<java::lang::StackWalker_Option> SHOW_HIDDEN_FRAMES() { return get_static_field<"SHOW_HIDDEN_FRAMES", jni::ref<java::lang::StackWalker_Option>>(); }

	static jni::ref<jni::array<java::lang::StackWalker_Option>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::StackWalker_Option>>>(); }
	static jni::ref<java::lang::StackWalker_Option> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::StackWalker_Option>>(name); }

protected:

	StackWalker_Option(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKWALKER_OPTION
