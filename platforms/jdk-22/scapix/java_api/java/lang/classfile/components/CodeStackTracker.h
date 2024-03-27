// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/CodeTransform.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CODESTACKTRACKER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CODESTACKTRACKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::components { class CodeStackTracker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::components::CodeStackTracker>
{
	static constexpr fixed_string class_name = "java/lang/classfile/components/CodeStackTracker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::CodeTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CODESTACKTRACKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CODESTACKTRACKER)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CODESTACKTRACKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/TypeKind.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::components::CodeStackTracker : public jni::object_base<"java/lang/classfile/components/CodeStackTracker",
	java::lang::Object,
	java::lang::classfile::CodeTransform>
{
public:

	static jni::ref<java::lang::classfile::components::CodeStackTracker> of(jni::ref<jni::array<java::lang::classfile::TypeKind>> initialStack) { return call_static_method<"of", jni::ref<java::lang::classfile::components::CodeStackTracker>>(initialStack); }
	jni::ref<java::util::Optional> stack() { return call_method<"stack", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::Optional> maxStackSize() { return call_method<"maxStackSize", jni::ref<java::util::Optional>>(); }

protected:

	CodeStackTracker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPONENTS_CODESTACKTRACKER
