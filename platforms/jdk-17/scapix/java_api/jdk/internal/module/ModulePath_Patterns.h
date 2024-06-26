// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATH_PATTERNS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATH_PATTERNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModulePath_Patterns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModulePath_Patterns>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModulePath$Patterns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATH_PATTERNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATH_PATTERNS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATH_PATTERNS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::module::ModulePath_Patterns : public jni::object_base<"jdk/internal/module/ModulePath$Patterns",
	java::lang::Object>
{
public:


protected:

	ModulePath_Patterns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEPATH_PATTERNS
