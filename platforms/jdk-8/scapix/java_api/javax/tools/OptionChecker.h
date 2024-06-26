// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_TOOLS_OPTIONCHECKER_FWD
#define SCAPIX_JAVA_API_JAVAX_TOOLS_OPTIONCHECKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::tools { class OptionChecker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::tools::OptionChecker>
{
	static constexpr fixed_string class_name = "javax/tools/OptionChecker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_OPTIONCHECKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_TOOLS_OPTIONCHECKER)
#define SCAPIX_JAVA_API_JAVAX_TOOLS_OPTIONCHECKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::tools::OptionChecker : public jni::object_base<"javax/tools/OptionChecker",
	java::lang::Object>
{
public:

	jint isSupportedOption(jni::ref<java::lang::String> p1) { return call_method<"isSupportedOption", jint>(p1); }

protected:

	OptionChecker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_OPTIONCHECKER
