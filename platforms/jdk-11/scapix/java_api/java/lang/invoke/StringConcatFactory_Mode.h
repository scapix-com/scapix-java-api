// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_STRINGCONCATFACTORY_MODE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_STRINGCONCATFACTORY_MODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class StringConcatFactory_Mode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::StringConcatFactory_Mode>
{
	static constexpr fixed_string class_name = "java/lang/invoke/StringConcatFactory$Mode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_STRINGCONCATFACTORY_MODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_STRINGCONCATFACTORY_MODE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_STRINGCONCATFACTORY_MODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::StringConcatFactory_Mode : public jni::object_base<"java/lang/invoke/StringConcatFactory$Mode",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::invoke::StringConcatFactory_Mode> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<java::lang::invoke::StringConcatFactory_Mode>>(); }
	static jni::ref<java::lang::invoke::StringConcatFactory_Mode> SIZED() { return get_static_field<"SIZED", jni::ref<java::lang::invoke::StringConcatFactory_Mode>>(); }
	static jni::ref<java::lang::invoke::StringConcatFactory_Mode> SIZED_EXACT() { return get_static_field<"SIZED_EXACT", jni::ref<java::lang::invoke::StringConcatFactory_Mode>>(); }

	static jni::ref<jni::array<java::lang::invoke::StringConcatFactory_Mode>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::invoke::StringConcatFactory_Mode>>>(); }
	static jni::ref<java::lang::invoke::StringConcatFactory_Mode> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::invoke::StringConcatFactory_Mode>>(name); }

protected:

	StringConcatFactory_Mode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_STRINGCONCATFACTORY_MODE
