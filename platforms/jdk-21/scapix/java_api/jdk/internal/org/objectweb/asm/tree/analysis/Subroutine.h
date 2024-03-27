// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SUBROUTINE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SUBROUTINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree::analysis { class Subroutine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::analysis::Subroutine>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/analysis/Subroutine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SUBROUTINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SUBROUTINE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SUBROUTINE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::org::objectweb::asm_::tree::analysis::Subroutine : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/analysis/Subroutine",
	java::lang::Object>
{
public:

	jboolean merge(jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Subroutine> subroutine) { return call_method<"merge", jboolean>(subroutine); }

protected:

	Subroutine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_SUBROUTINE
